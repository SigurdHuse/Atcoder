#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Will try to build segments

void solve(){
	ll N, C; cin >> N >> C;
	vector<pair<ll,ll>> event;
	
	for(ll i = 0; i < N; ++i){
		ll a, b, c;
		cin >> a >> b >> c;
		event.emplace_back(a-1,c);
		event.emplace_back(b, -c);
	}
	sort(all(event));
	
	ll ans = 0, fee = 0, t = 0;
	for(auto [x,y] : event){
		if(x != t){
			ans += min(C, fee) * (x - t);
			t = x;
		}
		fee += y;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

