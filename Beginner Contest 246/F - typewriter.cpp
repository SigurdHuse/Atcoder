#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

ll mod = 998244353;

ll power(ll a, ll b){
	ll ans = 1;
	while(b){
		if(b%2){
			ans *= a;
			ans %= mod;
		}
		a *= a;
		a %= mod;
		b /= 2;
	}
	return ans % mod;
}

void solve(){
	ll n, l; cin >> n >> l;
	ll ans = 0;
	vector<bool> mem(26,0);
	string s;
	REP(i,n){
		cin >> s;
		ll av = 0;
		for(char c : s){
			if(!mem[c - 'a']) av++;
			mem[c - 'a'] = 1;
		}
		ans += power(av, l);
		ans %= mod;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

