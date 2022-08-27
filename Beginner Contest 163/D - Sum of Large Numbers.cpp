#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const ll MOD = 1e9 + 7;

// Find high and low in each interval

// (2+ 3 + ... + n + 1) - (1 + 2 + ... + n)

void solve(){
	ll n, k; cin >> n >> k;
	ll ans = 0;
	for(ll i = k; i <= n + 1; ++i){
		ll t = i - 1;
		ll L = (1 + t) * t / 2, R = (2*n - i + 1)*i/2;
		//cout << R  <<" " << L << endl;
		ans = (ans + R - L + 1 ) %MOD;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

