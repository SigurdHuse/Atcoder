#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Up to n we have n square numbers

bool is_square(ll x){
	ll tmp = sqrt(x);
	return tmp*tmp == x;
}

void solve(){
	ll n; cin >> n;
	ll ans = n; 
	
	for(ll i = 1; i <= n; ++i){
		for(ll fac = 1; fac < i; ++fac){
			if(is_square(i*fac)){
				cout << i << " " << fac << endl; 
				ans += 2;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

