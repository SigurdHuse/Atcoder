#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll a, b, n; cin >> n >> a >> b;
	
	// Find greatest integer divisible by both a and b
	// Then use inclusion-exclusion formula
	
	ll mx = lcm(a,b);
	ll ans = n*(n+1)/2;
	ll n1 = n / a, n2 = n / b, n3 = n / mx;
	
	ans -= n1*(n1 + 1)/2*a;
	ans -= n2*(n2 + 1)/2*b;
	ans += n3*(n3 + 1)/2*mx;
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

