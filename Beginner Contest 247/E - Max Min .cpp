#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, x, y; cin >> n >> x >> y;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int start = INT_MAX;
	
	bool mi = 0, mx = 0;
	
	vector<pair<int,int>> segs;
	
	for(int i = 0; i < n; ++i){
		if(y <= v[i] && x >= v[i]) start = min(start,i);
		if(v[i] > x || v[i] < y){
			mi = 0; mx = 0;
			start = INT_MAX;
		}
		if(v[i] == y) mi = 1;
		if(v[i] == )
		
	}
	
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

