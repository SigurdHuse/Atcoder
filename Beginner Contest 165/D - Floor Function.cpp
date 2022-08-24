#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Binary search

ll a, b, n;

ll f(ll x){
	return floor(a*x/b + 0.0) - a*floor(x/b + 0.0);
}

void solve(){
	cin >> a >> b >> n;
	ll x = min(n, b-1);
	cout << f(x) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

