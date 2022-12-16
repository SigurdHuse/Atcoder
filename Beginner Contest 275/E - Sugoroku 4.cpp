#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const ll MOD = 998244353;

ll fpow(ll a, ll b){
	ll ans = 1;
	while(b){
		if(b & 1) ans = ans * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return ans;
}

void solve(){
	int n, m, k; cin >> n >> m >> k;
	ll dp[2][1010];
	
	ll mid = fpow(m, MOD - 2);
	
	dp[0][0] = 1;
	for(int i = 1; i <= k; ++i){
		for(int j = 0; j < n; ++j){
			for(int l = j+1; l <= j+m; ++l){
				int s = l;
				if(s > n) s = 2*n - s;
				dp[i & 1][s] = (dp[i & 1][s] + dp[(i-1)&1][j] * mid) % MOD;
			}
			dp[(i-1) & 1][j] = 0;
		}
		dp[i & 1][n] = (dp[i & 1][n] + dp[(i-1)&1][n]) % MOD;
		dp[(i-1) & 1][n] = 0;
	}
	cout << dp[k&1][n] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

