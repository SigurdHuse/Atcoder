#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// BFS and use sets 

void solve(){
	int n, m, e; cin >> n >> m >> e;
	vector<int> cnt(n+1);
	vector<vector<int>> G(m + n + 1);
	vector<pair<int,int>> lines[e + 1];
	int u, v;
	for(int i = 0; i < e; ++i){
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
		lines[i+1] = {u,v};
	}
	vector<set<int>> Nodes(n+m+1);
	for(int cur = n+1; cur <= n+m; ++cur){
		queue<int> q;
		q.insert(cur);
		vector<bool> visited(n+m+1);
		visited[cur] = 1;
		while(q.size()){
			int next = q.pop();
			for(int i : G[next]){
				if(!visited[i]){
					nodes[i].insert(next);
					q.push(i);
					visited[i] = 1;
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

