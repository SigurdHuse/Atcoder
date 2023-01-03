#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 998244353;


void solve(){
	int n, m, k; cin >> n >> m >> k;
	//REP(i,1005) REP(j,5005) dp[i][j] = 0;
	
	vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));
	
	REP(i,m) dp[1][i+1] = 1ll;
	
	for(int i = 1; i < n; ++i){
		vector<ll> sum(m+1,0ll);
		for(int kk = 0; k < m; ++kk){
			sum[kk+1] = (sum[kk] + dp[i][kk+1]) % M;
		}
		
		for(int j = 1; j < m+1; ++j){
			dp[i+1][j] = (dp[i+1][j]+ sum[max(0,j-k)]) % M;
			dp[i+1][j] = (dp[i+1][j] + sum[m] - sum[min(m,j+k-1)]) % M;
		}
	}
	ll ans = 0;
	for(int i = 0; i < m; ++i){
		ans = (ans + dp[n][i+1]) % M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

