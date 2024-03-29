#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Optimal choice gives us
// v[0] + v[1] + v[1] + v[2] + v[2] + ...

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	ll ans = 0;
	int off = 1;
	sort(all(v), greater<int>());
	for(int i = 1; i < n; ++i){
		ans += v[i - off];
		off += !(i & 1);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

