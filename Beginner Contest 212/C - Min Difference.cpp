#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for(auto &s : a) cin >> s;
	for(auto &s : b) cin >> s;
	
	sort(all(a));
	sort(all(b));
	
	int ans = INT_MAX;
	
	for(int i = 0; i < n; ++i){
		auto it1 = lower_bound(all(b),a[i]), it2 = upper_bound(all(b),a[i]);
		if(it1 != b.end())ans = min(ans, abs(a[i] - *it1));
		if(it2 != b.end())ans = min(ans, abs(a[i] - *it2));
	}
	for(int i = 0; i < m; ++i){
		auto it1 = lower_bound(all(a),b[i]), it2 = upper_bound(all(a),b[i]);
		if(it1 != a.end())ans = min(ans, abs(b[i] - *it1));
		if(it2 != a.end())ans = min(ans, abs(b[i] - *it2));
	}
	
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

