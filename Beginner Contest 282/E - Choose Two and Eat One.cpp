#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll M;

ll mod_pow(ll x, ll y){
	ll ans = 1;
	while(y > 0){
		if(y & 1){
			ans = (ans * x) % M;
		}
		x = (x * x) % M;
		y /= 2;
	}	
	return ans;
}

struct Node{
	int idx;
	ll val;
	
	Node(int i, ll v) : idx(i), val(v) {}
	
	bool operator<(const Node& rhs) const{
		return val < rhs.val;
	};
};

void solve(){
	int n; cin >> n;
	cin >> M;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	vector<vector<ll>> G(n, vector<ll>(n,-1));
	
	for(int i = 0; i < n; ++i){
		for(int j = i+1; j < n; ++j){
			G[i][j] = (mod_pow(v[i],v[j]) + mod_pow(v[j], v[i]))%M;
			G[j][i] = G[i][j];
		}
	}
	ll ans = 0;
	vector<bool> visited(n);
	visited[0] = 1;
	priority_queue<Node> q;
	
	for(int i = 0; i < n; ++i){
		q.push(Node(i,G[0][i]));
	}
	
	//for(int i = 0; i < n; ++i){
	//	for(int j = 0; j < n; ++j) cout << G[i][j] << " ";
	//	cout << endl;
	//}
	
	while(q.size()){
		Node cur = q.top(); q.pop();
		if(visited[cur.idx]) continue;
		//cout << cur.idx << endl;
		visited[cur.idx] = 1;
		ans += cur.val;
		
		for(int i = 0; i < n; ++i){
			if(!visited[i]){
				q.push(Node(i,G[cur.idx][i]));
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

