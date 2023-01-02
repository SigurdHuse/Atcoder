#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, l, r; cin >> n >> l >> r;
	vector<ll> a(n);
	for(auto &v : a) cin >> v;
	
	vector<ll> f(n+1,0);
	for(int i = 1; i <= n; ++i){
		f[i] = min(f[i-1] + a[i-1], l*i);
	}
	
	reverse(all(a));
	
	vector<ll> g(n+1,0);
	for(int i = 1; i <= n; ++i){
		g[i] = min(g[i-1] + a[i-1], r*i);
	}
	
	ll ans = LLONG_MAX;
	for(int i = 0; i <= n; ++i){
		ans = min(f[i] + g[n-i], ans);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

