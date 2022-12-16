#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll fac_mod(ll i, ll k){
	ll ans = 1;
	
	for(ll fac = 1; fac <= i; ++fac){
		ans = (ans *fac) % k; 
	}
	return ans;
}

void solve(){
	ll k; 
	cin >> k;
	ll fac = 1, ans = 1;
	
	
	for(ll i = 1; i <= 2*sqrt(k); ++i){
		if(fac == 0ll){
			break;
		}
		ans++;
		fac = (fac * (ans % k)) % k;
	}
	cout << (fac == 0ll ? ans : k) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

