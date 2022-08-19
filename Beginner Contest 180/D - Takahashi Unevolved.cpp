#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll x, y, a, b; cin >> x >> y >> a >> b;
	ll ans = 0;
	
	while((double)a*x <= 2e18 && a*x <= x + b && a*x < y){
		x *= a;
		ans++;
	}
	cout << ans + (y-1-x)/b << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

