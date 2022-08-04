#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Instead of counting all those who satisfy, we count all those
// who can be written as a^b, b,a >= 2
// This is a simple brute force, where we check for duplicates
// For example 3^4 = 9^2, but we can only count it once

set<ll> mem;

void solve(){
	ll n; cin >> n;
	ll ans = n;
	ll i = 4;
	while(i <= n){
		mem.insert(i);
		ans--;
		i <<= 1;
	}
	i = 3;
	for(i = 3; i <= sqrt(n) + 1; i++){
		for(ll j = 2; j <= n; ++j){
			ll tmp = pow(i, j);
			if(tmp > n) break;
			if(!mem.count(tmp)){
				ans--;
				mem.insert(tmp);
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

