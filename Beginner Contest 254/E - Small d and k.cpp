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
	int n, m; cin >> n >> m;
	int a, b; 
	vector<vector<int>> G(n+1);
	
	for(int i = 0; i < m; ++i){
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	vector<vector<int>> dist(4, vector<int>(n+1));
	
	
	for(int i = 1; i <= n; ++i){
		queue<int> q;
		vector<bool> visited(n+1, 0);
		visited[i] = 1;
		q.push(i);
		dist[0][i] = i;
		for(int round = 1; round <= 3; ++round){
			int size = q.size();
			int neig = 0;
			for(int _ = 0; _ < size; ++_){
				int u = q.front(); q.pop();
				for(int j : G[u]){ 
					if(!visited[j]){
						visited[j] = 1;
						neig += j;
						q.push(j);
					}
				}
			}
			dist[round][i] = dist[round-1][i] + neig;
		}
	}
	
	/*
	for(int i = 0; i <=3; ++i){
		for(int j = 0; j <= n; ++j) cout << dist[i][j] << " ";
		cout << endl;
	}
	*/
	int q; cin >> q;
	int k, x;
	while(q--){
		cin >> x >> k;
		cout << dist[k][x] << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

