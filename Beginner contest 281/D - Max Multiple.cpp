#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// We take mod and then compute dp

ll dp[105][105];

void solve(){
	int n, k, d; cin >> n >> k >> d;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	//sort(all(a), greater<int>());
	REP(i,105) REP(j,105) dp[i][j] = -1;
	dp[0][0] = 0;
	
	for(int i = 0; i < n; ++i){
		int cur = a[i] % d;
		for(int step = 103; step >= 0; --step){
			for(int mod = 103; mod >= 0; --mod){
				if(dp[step][mod] != -1){
					dp[step+1][(mod + cur)%d] = max(dp[step+1][(mod + cur)%d], dp[step][mod] + a[i]);
				}
			}
		}
	}
	
	cout << dp[k][0] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

