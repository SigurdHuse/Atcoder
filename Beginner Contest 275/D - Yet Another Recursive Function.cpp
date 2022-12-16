#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

unordered_map<ll,ll> mem;

ll f(ll x){
	if(x == 0) return 1;
	if(mem.count(x)) return mem[x];
	else{
		mem[x] = f(x / 2) + f(x / 3);
		return mem[x];
	}
}

void solve(){
	ll n; cin >> n;
	cout << f(n) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

