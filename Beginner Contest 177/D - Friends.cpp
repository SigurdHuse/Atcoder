#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Find guy with the most friends
// Is a graph problem longest path in graph

set<int> seen;
int ans = 0;

void search(int cnt, int cur, vector<vector<int>> &v){
	if(v[cur].empty()){
		ans = max(ans, cnt);
		return;
	}
	cout << cur << " " << cnt << endl;
	if(seen.count(cur)){
		ans = max(ans,cnt-1);
		return;
	}
	seen.insert(cur);
	for(int i : v[cur]){
		search(cnt + 1, i, v);
	}
}

void solve(){
	int n, m, a, b; cin >> n >> m;
	vector<vector<int>> v(n+1);
	REP(i,m){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i = 1; i <= n; ++i){
		if(!seen.count(i)){
			search(1, i, v);
		}
	}
	cout << ans + 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

