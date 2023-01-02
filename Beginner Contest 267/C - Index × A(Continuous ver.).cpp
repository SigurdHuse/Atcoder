#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Sliding window

void solve(){
	int n, m; cin >> n >> m;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	ll ans = LLONG_MIN;
	ll s = 0, cnt = 0;
	for(int i = 0; i < m; ++i){
		s += v[i];
		cnt += v[i] * (i+1);
	}
	ans = max(ans, cnt);
	//cout << ans << endl;
	for(int i = 1; i <= n - m; ++i){
		//cout << cnt << endl;
		cnt -= s;
		s -= v[i-1];
		s += v[i+m-1];
		cnt += v[i+m-1] * m;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

