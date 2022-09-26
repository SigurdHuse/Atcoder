#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// The sum of the n-th row is 2^n

const ll MOD = 1e9 + 7;

ll power(ll a, ll b){
	ll ans = 1;
	while(b > 0){
		if(b & 1){
			ans = ans * a % MOD;
		}
		b /= 2;
		a *= a * a % MOD;
	}
	return ans;
}

ll ncr(ll n, ll k){
	k = min(n-k,k);
	ll ans = 1;
	for(ll i = 1; i <= k; i++){
		ans = ans * (n - k + i) % MOD * power(i, MOD-2) % MOD;
	}
	return ans;
}

void solve(){
	ll n, a, b; cin >> n >> a >> b;
	ll ans = pow(2,n);
	ans--;
	cout << ans << endl;
	ans -= ncr(n,a);
	ans -= ncr(n,b);
	ans += 2*MOD;
	ans %= MOD;			// can't pick zero
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

