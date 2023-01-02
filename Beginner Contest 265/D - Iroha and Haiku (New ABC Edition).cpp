#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, p, q,r;
	cin >> n >> p >> q >> r;
	
	ll crr = 0;
	set<ll> s({0});
	for(int i = 0; i < n; ++i){
		int a; cin >> a;
		crr += a;
		s.insert(crr);
	}
	for(auto x : s){
		if(s.find(x+p) != s.end() && s.find(x+p+q) != s.end() && s.find(x + p +q+r) != s.end()){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

