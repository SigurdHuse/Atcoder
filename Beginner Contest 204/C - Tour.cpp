#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Brute force
const int MAX_N = 2000;

vector<vector<int>> G;
bool temp[MAX_N];

void dfs(int v){
	if(temp[v]) return;
	temp[v] = true;
	for(auto vv : G[v]) dfs(vv);
}

void solve(){
	int n, m; cin >> n >> m;
	
	G.resize(n);
	
	int a, b;
	REP(i,m){
		cin >> a >> b;
		a--; b--;
		G[a].push_back(b);
	}
	
	int ans = 0;
	for(int i = 0; i <n; ++i){
		for(int j = 0; j < n; ++j) temp[j] = false;
		dfs(i);
		for(int j = 0; j < n; ++j)if(temp[j]) ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

