#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// When using multisets erase(val) deletes all values of that kind
// while erase(it) erases only one element

bool myfunc(pair<ll,ll> p1, pair<ll,ll> p2){
	return p1.f > p2.f;
}

void solve(){
	int n, m, q; cin >> n >> m >> q;
	vector<pair<ll,ll>> v(n);
	vector<ll> boxes(m);
	REP(i,n) cin>> v[i].s >> v[i].f;
	for(auto &a : boxes) cin >> a;
	sort(all(v), myfunc);
	
	int l, r;
	REP(j,q){
		cin >> l >> r;
		l--; r--;
		ll ans = 0;
		multiset<int> st;
		for(int i = 0; i < l; ++i) st.insert(boxes[i]);
		for(int i = r+1; i < m; ++i) st.insert(boxes[i]);
		for(auto p : v){
			auto it = st.find(p.second);
			if(it != st.end()){
				ans += p.first;
				st.erase(it);
			}
			else{
				it = st.upper_bound(p.second);
				if(it == st.end()) continue;
				ans += p.first;
				st.erase(it);
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

