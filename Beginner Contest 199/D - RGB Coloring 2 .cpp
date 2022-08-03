#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 22;
vector<int> E[N];
int color[N];
int seen[N];
vector<int> comp;

void dfs(int u){
	if(seen[u]) return;
	seen[u] = 1;
	comp.push_back(u);
	for(int v : E[u]){
		dfs(v);
	}
}

int calc(int i){
	if(i == SZ(comp)) return 1;
	int u = comp[i];
	
	int result = 0;
	for(int c = 0; c < 3; ++c){
		bool ok = 1;
		for(int v : E[u]){
			if(color[v] == c) ok = 0;
		}
		if(ok){
			color[u] = c;
			result += calc(i+1);
		}
	}
	color[u] = -1;
	return result;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> G(n);
	int a, b; 
	REP(i,m){
		cin >> a >> b;
		a--;b--;
		E[a].push_back(b);
		E[b].push_back(a);
	}
	
	memset(color, -1, sizeof color);
	
	ll result = 1;
	for(int i = 0; i < n; ++i){
		if(seen[i]) continue;
		
		dfs(i);
		color[comp[0]] = 0;
		result *= 3 * calc(1);
		comp.clear();
	}
	cout << result << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

