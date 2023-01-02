#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 
ll dp[2001][2001];

void solve(){
	int n,m; cin >> n >> m;
	vector<ll> a(n);
	REP(i,n) cin >> a[i];
	
	dp[0][0] = 0;
	dp[0][1] = LLONG_MIN;
	
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j <= n; ++j){
			if(j == 0) dp[i][0] = 0;
			else if(j > i) dp[i][j] = LLONG_MIN;
			else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + a[i-1]*j);
		}
	}
	
	cout << dp[n][m] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

