#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll my_pow(ll a, ll b){
	ll ans = 1;
	while(b > 0){
		if(b & 1) ans *= a;
		a *= a;
		b /= 2;
	}
	return ans;
}

void solve(){
	ll a, b; cin >> a >> b;
	cout << my_pow(a,b) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

