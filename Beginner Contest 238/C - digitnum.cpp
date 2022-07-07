#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int M = 998244353;
const int inv2 = 499122177;

// we have sums 1...9 + 10...99 + 100....999

ll triangular_number(ll x){
	x %= M;
	ll res = x;
	res *= (x+1); res %= M;
	res *= inv2; res %= M;
	return res;
}


void solve(){
	ll n; cin >> n;
	
	ll res = 0;
	ll p10 = 10;
	for(int dg = 1; dg <= 18; dg++){
		ll l = p10/10;
		ll r = min(n, p10-1);
		if(l <= r){res += triangular_number(r-l+1);res %= M;}
		p10 *= 10;
	}
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

