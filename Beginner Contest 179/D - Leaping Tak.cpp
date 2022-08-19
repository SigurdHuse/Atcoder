#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const ll M = 998244353;

void solve(){
	ll n, m, k,dp[500008]; cin >> n >> k;
	ll suf[500005];
	vector<pair<ll,ll>> v(k);
	for(auto &[a,b] : v) cin >> a >> b;
	dp[n] = 1;
	suf[n] = 1;
	m = SZ(v);
	for(int i = n - 1; i > 0; --i){
		for(int j = 0; j < m; ++j){
			ll l = v[j].f, r = v[j].s;
			dp[i] += suf[i+l] - suf[i+r+1];
			dp[i] += M, dp[i] %= M;
			
		}
		suf[i] = (suf[i+1] + dp[i])%M;
	}
	
	cout << dp[1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

