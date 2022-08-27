#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	unordered_map<int,ll> mem;
	vector<int> v(n);
	REP(i,n){
		cin >> v[i];
		mem[v[i]]++;
	}
	ll ans = 0;
	for(auto p : mem){
		ans += p.s * (p.s - 1) / 2;
	}
	
	for(int i = 0; i < n; ++i){
		ll cnt = mem[v[i]];
		ans -= cnt * (cnt - 1) / 2;
		ans += (cnt- 1) * (cnt - 2) / 2; 
		cout << ans << endl;
		ans += cnt * (cnt - 1) / 2;
		ans -= (cnt- 1) * (cnt - 2) / 2;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

