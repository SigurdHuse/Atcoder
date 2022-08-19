#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Inclusion - exclusion problem

const ll M = 1e9 + 7;

// 9^(n-1) - 2*8^(n - 1)

ll power(ll a, ll b){
	ll ans = 1;
	while(b > 0){
		if(b % 2){
			ans *= a;
			ans %= M;
		}
		b /= 2;
		a *= a;
		a %= M;
	}
	return ans;
}

void solve(){
	ll n; cin >> n;
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	ll ans = power(10ll, n) - 2ll*power(9ll,n) + power(8ll,n);
	ans %= M;
	ans += M;
	ans %= M;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

