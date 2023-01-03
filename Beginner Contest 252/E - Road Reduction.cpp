#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

/// Dijkstra

struct Node{
	int idx;
	int cost;
	int road_nr;
	Node(int i, int c, int n) : idx(i), cost(c), road_nr(n) {}
	
	bool operator<(const Node & rhs) const{
		return cost > rhs.cost;
	};
	
};

struct Road{
	int to, cost, num;
	
	Road(int t, int f, int n) : to(t), cost(f), num(n) {}
};

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<Road>> G(n);
	int a, b, c; 
	
	for(int i = 0; i < m; ++i){
		cin >> a >> b >> c;
		a--; b--;
		G[a].push_back(Road(b,c,i));
		G[b].push_back(Road(a,c,i));
	}
	
	queue<Node> q;
	q.push(Node(0,0,0));
	vector<pair<ll,int>> dis(n);
	for(int i = 1; i <n; ++i) dis[i].f = LLONG_MAX;
	
	vector<int> ans;
	
	while(q.size()){
		Node cur = q.front(); q.pop();
		for(auto v : G[cur.idx]){
			if(dis[cur.idx].f + v.cost < dis[v.to].f){
				dis[v.to].f = dis[cur.idx].f + v.cost;
				dis[v.to].s = v.num;
				q.push(Node(v.to,v.cost,v.num));
			}
		}
	}
	for(int i = 1; i < n; ++i) cout << dis[i].s + 1 << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

