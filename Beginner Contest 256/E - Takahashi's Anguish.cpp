#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// This is a DAG

// Each node has a value associated with removing it
// Use priority queue to keep track and always choose smallest

struct Node{
	ll cost;
	int idx;
	
	Node(ll c, int i) : cost(c), idx(i) {}
	
	bool operator<(const Node& rhs) const{
		return cost > rhs.cost;
	};
	
};

void solve(){
	int n; cin >> n;
	vector<vector<int>> G(n);
	vector<ll> cost(n);
	vector<int> x(n), c(n);
	for(auto &a :x){
		cin >> a; a--;
	}
	for(auto &a : c) cin >> a;
	
	// Removing x before i, costs c[i]
	for(int i = 0; i< n; ++i){
		G[i].push_back(x[i]);
		cost[x[i]] += c[i];
	}
	vector<bool> seen(n);
	ll ans = 0;
	priority_queue<Node> q; 
	
	for(int i = 0; i< n; ++i){
		q.push(Node(cost[i], i));
	}
	
	Node cur(0,0);
	int cnt = 0;
	while(cnt < n){
		cur = q.top(); q.pop();
		if(seen[cur.idx]) continue;
		cnt++;
		seen[cur.idx] = 1;
		ans += cur.cost;
		
		for(int j : G[cur.idx]){
			cost[j] -= c[cur.idx];
			q.push(Node(cost[j], j));
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

