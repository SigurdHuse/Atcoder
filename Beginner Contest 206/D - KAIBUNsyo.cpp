#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

using Graph=vector<vector<int>>;

void dfs(int v, vector<bool> &flag, Graph &g){
	if(!flag[v]) return;
	flag[v] = false;
	for(auto &nx : g[v]) dfs(nx, flag, g);
}

void solve(){
	int n, res = 0; cin >> n;
	vector<int> a(n);
	vector<bool> flag(200005, false);
	Graph g(200005);
	for(auto &nx : a){
		cin >> nx;
		if(!flag[nx]){flag[nx] = 1; res++;}
	}
	
	int p = 0, q = n-1;
	while(p < q){
		g[a[p]].push_back(a[q]);
		g[a[q]].push_back(a[p]);
		p++; q--;
	}
	for(int i = 1; i <= 200000; ++i){
		if(flag[i]){
			res--;
			dfs(i, flag, g);
		}
	}
	
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

