#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Pure brute force
// 1e18^0.2 = 3981

void solve(){
	ll x; cin >> x;
	for(ll a = 3000; a >= -3000; --a){
		for(ll b = -3000; b <= 3000; b++){
			ll tmp1 = pow(a,5), tmp2 = pow(b,5);
			if(tmp1 - tmp2 == x){
				cout << a << " " << b << endl;
				return;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

