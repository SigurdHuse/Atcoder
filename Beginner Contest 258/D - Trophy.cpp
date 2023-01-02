#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Keep track of shortest stage cleared so far

// Then minimum time is sum time spent so far plus the number of stages
// left to be cleared multiplied with minium stage time.
void solve(){
	int n; cin >> n;
	ll x; cin >> x;
	vector<pair<ll,ll>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	
	
	ll ans = LLONG_MAX, off = 0, mi = LLONG_MAX;
	for(int i = 0; i < n; ++i){
		off += v[i].f + v[i].s;
		mi = min(mi, v[i].s);
		ll cur = off + (mi * (x - i - 1));
		ans = min(ans, cur);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

