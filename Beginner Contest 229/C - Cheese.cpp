#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// We sort and then choose topping greedily

bool myfunc(pair<ll,ll> p1, pair<ll,ll>p2){
	return p1.first > p2.first;
}

void solve(){
	ll n, w; cin >> n >> w;
	vector<pair<ll,ll>> v(n);
	REP(i,n) cin >> v[i].first >> v[i].second;
	
	sort(all(v), myfunc);
	
	//for(auto p : v) cout << p.first << p.second<< endl;
	
	ll ans = 0;
	int j = 0;
	
	while(w != 0 && j < n){
		if(v[j].second <= w){
			ans += v[j].second*v[j].first;
			w -= v[j].second;
		}
		else{
			ans += w*v[j].first;
			w = 0;
		}
		j++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

