#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, k; cin >> n >> k;
	vector<pair<ll,ll>> v(n);
	for(auto &[a, b] : v) cin >> a >> b;

	ll cur = 0;
	sort(all(v));
	for(auto p : v){
		if(p.f - cur > k){
			cur += k;
			k = 0;
			break;
		}
		k += p.s;
		k -= p.f - cur;
		cur = p.f;
	}
	cur += k;
	cout << cur << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

