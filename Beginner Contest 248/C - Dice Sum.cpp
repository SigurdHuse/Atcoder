#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int mod = 998244353;

void solve(){
	ll n, m, k; cin >> n >> m >> k;
	ll ans = 1;
	k -= n;
	for(;k > 0; --k){
		ans *= min(m,k);
		ans %= mod;
	}
	ans *= n;
	cout << ans % mod << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

