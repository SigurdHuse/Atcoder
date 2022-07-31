#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (ll)a.size()
typedef long long ll;
using namespace std; 

const int N = 2 * 1e5, M = 1e9 + 7;

vector<bool> visited(N, 0);

int shortest = INT_MAX;

int ans = 0;

void find_shortest(int cur, vector<vector<int>> &v, int steps){
	if(cur == 0){
		shortest = min(shortest, steps);
		return;
	}
	if(visited[cur]) return;
	visited[cur] = 1;
	for(int i : v[cur]){
		find_shortest(i, v, steps + 1);
	}
}

void find_ans(int cur, int last, vector<vector<int>> &v, int steps){
	if(cur == 0){
		ans++;
		if(ans >= M) ans -= M;
	}
	if(steps >= shortest || cur == last)return;
	for(int i : v[cur]){
		find_ans(i, cur, v, steps + 1);
	}
}

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> paths(n);
	int a, b;
	REP(i,m){
		cin >> a >> b;
		a--;b--;
		paths[a].push_back(b);
		paths[b].push_back(a);
	}
	queue<int> q;
	q.push(0);
	vector<int> dist(n, -1);
	vector<int> cnt(n,0);
	dist[0] = 0;
	cnt[0] = 1;
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int vv : paths[v]){
			if(dist[vv] == -1){
				dist[vv] = dist[v] + 1;
				q.push(vv);
				cnt[vv] = cnt[v];
			}
			else if(dist[vv] == dist[v] + 1){
				cnt[vv] += cnt[v];
				cnt[vv] %= M;
			}
		}
	}
	cout << cnt[n-1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}
