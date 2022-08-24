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
	unordered_map<ll,ll> mem;
	ll b, c;
	ll ans = 0;
	while(n--){
		cin >> b;
		mem[b]++;
		ans += b;
	}
	int q; cin >> q;
	//for(auto p : mem) cout << p.f << " " << p.s << endl;
	while(q--){
		 cin >> b >> c;
		 mem[c] += mem[b];
		 ans += (c - b)*mem[b];
		 mem[b] = 0;
		 //for(auto p : mem) cout << p.f << " " << p.s << endl;
		 cout << ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

