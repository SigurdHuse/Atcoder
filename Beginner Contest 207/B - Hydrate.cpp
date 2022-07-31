#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll a, b, c, d; cin >> a >> b >> c >>d;
	ll blue = a, red = 0;
	
	for(int i = 1; i <= a; ++i){
		blue += b;
		red += c;
		if(blue <= d*red){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

