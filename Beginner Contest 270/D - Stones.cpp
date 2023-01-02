#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int dp[10010];

void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(k);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j < k; ++j){
			if(v[j] > i) break;
			dp[i] = max(dp[i], i - dp[i - v[j]]);
		}
	}
	cout << dp[n] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

