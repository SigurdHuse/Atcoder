#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const ll mod = 998244353;

ll dp[55][2505];

void solve(){
	int n, m, k; cin >> n >> m >> k;
	for(int i = 1; i <= m; ++i){
		dp[1][i] = 1;
	}
	for(int i = 2; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			for(int t = i-1; t <= 2500; ++t){
				if(j + t > 2500) break;
				dp[i][j+t] += dp[i-1][t];
				dp[i][j+t] %= mod;
			}
		}
	}
	ll ans = 0;
	for(int i = 1; i <= k; ++i){
		ans = (ans + dp[n][i]) % mod;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

