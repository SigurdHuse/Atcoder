#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	ll s = accumulate(all(v), 0ll);
	ll x; cin >> x;
	ll ans = (x / s)*n;
	ll sumb = (x/s)*s;
	
	for(ll val : v){
		sumb += val;
		ans++;
		if(sumb > x){
			break;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

