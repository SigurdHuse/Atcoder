#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find minimal spanning tree between trampolines

struct Trampoline{
	int x, y, p;
};

void solve(){
	int n; cin >> n;
	vector<Trampoline> v(n);
	REP(i,n) cin >> v[i].x >> v[i].y >> v[i].p;
	vector<vector<ll>> c(n, vector<ll>(n, LLONG_MAX));
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(j == i) continue;
			ll dist = abs(v[i].x - v[j].x) + abs(v[i].y- v[j].y);
			c[i][j] = (dist + v[i].p - 1) / v[i].p;
		}
	}
	
	ll ans = LLONG_MAX;
	for(int start = 0; start < n; ++start){
		vector<ll> dist(n, LLONG_MAX);
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				dist[j] = min(dist[j], c[i][j]);
			}
		}
		dist[start] = 0;
		int mi = INT_MAX, idx;
		for(int j = 0; j < n; ++j){
			if(c[start][j] < mi){
				mi = c[start][j];
				idx = j;
			}
		}
		dist[idx] = mi;
		//for(int i : dist) cout << i << " ";
		//cout << endl;
		ans = min(ans, *max_element(all(dist)));
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

