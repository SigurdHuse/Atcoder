#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll MOD = 998244353;

void solve(){
	ll n; cin >> n;
	if(abs(n) % MOD == 0){
		cout << 0 << endl;
	} 
	else if(n < 0){
		cout << MOD - abs(n) % MOD << endl;
	}
	else cout << n % MOD << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

