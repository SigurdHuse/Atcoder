#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll x, k, d; cin >> x >> k >> d;
	x = abs(x);
	ll tmp = min(k, x / d);
	k -= tmp;
	if(k & 1) cout << abs(x-d) << endl;
	else cout << abs(x) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

