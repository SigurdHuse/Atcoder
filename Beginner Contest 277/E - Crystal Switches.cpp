#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// BFS which keep track of flipped

unordered_set<int> swi;
unordered_map<int,int> visited_on;
unordered_map<int,int> visited_off;

int inf = INT_MAX;


void solve(){
	int n,m, k; cin >> n >> m >> k;
	
	vector<vector<pair<int,int>>> G(400005);
	vector<int> dist(400005, inf);
	
	int u,v, a,s;
	
	while(m--){
		cin >> u >> v >> a;
		if(a == 1){
			G[u].push_back({v,1});
			G[v].push_back({u,1});
		}
		else{
			G[n+u].push_back({n+v,1});
			G[n+v].push_back({n+u,1});
		}
	}
	
	REP(i,k){
		cin >> s;
		G[s].push_back({n+s,0});
		G[n+s].push_back({s,0});
	}
	
	deque<int> deq;
	deq.push_back(1);
	dist[1] = 0;
	
	while(deq.size()){
		v = deq.front();
		deq.pop_front();
		
		for(int i = 0; i < (int)G[v].size();++i){
			u = G[v][i].first;
			int c = G[v][i].second;
			if(dist[u] > dist[v] + c){
				dist[u] = dist[v] + c;
				if(c == 0) deq.push_front(u);
				else deq.push_back(u);
			}
		}
	}
	int ans = min(dist[n], dist[2*n]);
	if(ans == inf) ans = -1;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

