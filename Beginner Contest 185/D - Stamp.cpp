#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	if(m == 0){
		cout << n << endl;
		return;
	}
	vector<int> v(m);
	
	for(int i = 0; i < m; ++i) cin >> v[i];
	sort(all(v));
	if(v[m-1] != n) v.push_back(n+1);
	if(v[0] != 1) v.insert(v.begin(),0);
	
	m = SZ(v);
	int width = INT_MAX;
	for(int i = 1; i < m; ++i){
		width = min(width, v[i] - v[i-1] - 1);
	}
	int ans = 0;
	if(width == 0){
		cout << 0 << endl;
		return;
	}
	for(int i = 1; i < m; ++i){
		ans += (v[i] - v[i-1] - 1)/width;
		ans += (((v[i] - v[i-1] - 1) % width) != 0);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

