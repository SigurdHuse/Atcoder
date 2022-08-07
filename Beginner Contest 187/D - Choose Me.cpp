#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<ll> x(n);
	ll X = 0;
	for(ll i = 0; i < n; ++i){
		ll a, b; cin>> a >> b;
		X -=a;
		x[i] = a + a + b;
	}
	sort(all(x));
	ll ans = 0;
	while(X <= 0){
		X += x.back();
		x.pop_back();
		ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

