#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct Node{
	ll x, s;
	
	bool operator<(const Node& rhs) const{
		return s < rhs.s;
	};
};

void solve(){
	int n, m; cin >> n >> m;
	vector<ll> cost(n);
	vector<Node> cur(n);
	vector<vector<int>> G(n);
	vector<bool> seen(n);
	
	for(auto &a : cost){
		cin >> a;
		a *= -1;
	}
	int u, v;
	
	REP(i,m){
		cin >> u >> v;
		u--;
		v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	Node tmp;
	priority_queue<Node> q;
	for(int i = 0; i < n; ++i){
		ll cnt = 0;
		for(int j : G[i]){
			cnt += cost[j];
		}
		tmp.s = cnt;
		tmp.x = i;
		cur[i] = tmp;
		q.push(tmp);
	}
	int visited = 0;
	ll ans = INT_MIN;
	
	//for(auto y : cur) cout << y.s << " ";
	//cout << endl;
	while(visited < n){
		tmp = q.top();
		q.pop();
		if(seen[tmp.x]) continue;
		//cout << tmp.x << " "<< tmp.s << endl;
		seen[tmp.x] = 1;
		ans = max(ans, -tmp.s);
		visited++;
		for(int j : G[tmp.x]){
			cur[j].s -= cost[tmp.x];
			q.push(cur[j]);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

