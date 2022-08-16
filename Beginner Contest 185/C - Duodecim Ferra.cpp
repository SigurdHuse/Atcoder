#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll comb(ll x){
	ll ans = 1;
	for(int i = 1; i <= 11; ++i){
		ans *= (x - i);
		ans /= i;
	}
	return ans;
}

void solve(){
	ll l; cin >> l;	
	cout << comb(l) << endl;
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

