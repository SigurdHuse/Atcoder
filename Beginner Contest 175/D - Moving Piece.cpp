#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<ll> p(n), v(n);
	for(auto &a : p){
		cin >> a;
		a--;
	}
	for(auto &a : v) cin >> a;
	ll s = accumulate(all(v), 0);
	ll ans = s*(k / n);
	k %= n;
	if(k == 0){
		cout << max({ans,s,*max_element(all(v))}) << endl;
		return;
	}
	ll mx = INT_MIN;
	for(int start = 0; start < n; ++start){
		ll tmp = 0;
		mx = max(tmp, mx);
		int cur = p[start];
		for(int j = 0; j < k; ++j){
			tmp += v[cur];
			mx = max(tmp, mx);
			cur = p[cur];
		}
	}
	cout << max(ans,0ll) + mx << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

