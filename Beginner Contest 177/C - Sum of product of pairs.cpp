#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Keep track of sum and multiply

const ll M = 1e9 + 7;

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	ll s = 0, ans = 0;
	for(ll a : v){
		s += a;
		s %= M;
	}
	for(ll a : v){
		s -= a;
		s = (s + M) % M;
		ans += s * a;
		ans %= M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

