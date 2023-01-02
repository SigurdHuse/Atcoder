#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find number of bipartite components
// Then each component can connect to all vertices
// Except the one in the same component with different color
// Which are half of the vertices

void solve(){
	ll n,m; cin >> n >> m;
	
	bool ok = 1;
	vector<vector<int>> G(n);
	vector<pair<int,int>> comps(n, {-1,-1});
	vector<bool> col(n);
	int u, v;
	for(int i = 0; i < m; ++i){
		cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	ll ans = n*(n-1) - m;
	vector<bool> vis(n);
	for(int i = 0; i < n; ++i){
		if(!vis[i]){
			ok = 1;
			vis[i] = 1;
			int white = 0, black = 1;
			vis[i] = 1;
			col[i] = 1;
			stack<int> q;
			q.push(i);
			
			while(q.size()){
				int cur = q.top(); q.pop();
				for(int j : G[cur]){
					if(vis[j]){
						if(col[j] == col[cur]) ok = 0;
						continue;
					}
					else{
						vis[j] = 1;
						col[j] = !col[cur];
						if(col[cur]) white++;
						else black++;
						q.push(j);
					}
				}
			}
			if(ok){
				ans -= black * (white - 1) / 2;
				ans -= white * (black - 1) / 2;
			}
		}
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

