#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, x, y; cin >> n >> x >> y;
	vector<vector<int>> g(n+1);
	int u, v;
	for(int i = 0; i < n-1; ++i){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	
	map<int,int> parent;
	stack<int> q;
	q.push(x);
	
	while(q.size()){
		int cur = q.top();
		q.pop();
		if(cur == y) break;
		for(auto i : g[cur]){
			if(!parent.count(i)){
				parent[i] = cur;
				q.push(i);
			}
		}
	}
	vector<int> ans;
	int cur = y;
	
	while(cur != x){
		ans.push_back(cur); 
		cur = parent[cur];
	}
	ans.push_back(x);
	reverse(all(ans));
	for(int i : ans )cout << i<< " ";
	cout << endl;
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

