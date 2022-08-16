#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n, k;

int ans = 0;

void search(int cur, int time, int total, vector<vector<int>> v, string visited){
	if(total == n-1){
		time += v[cur][0];
		if(time == k) ans++;
		return;
	}
	for(int i = 0; i < n; ++i){
		string tmp = visited;
		if(visited[i] == '0'){
			tmp[i] = '1';
			search(i, time + v[cur][i], total + 1, v, tmp);
		}
	}
}

void solve(){
	cin >> n >> k;
	vector<vector<int>> v(n, vector<int>(n));
	REP(i,n) REP(j,n) cin >> v[i][j];
	string visited(n, '0');
	visited[0] = '1';
	search(0, 0, 0, v, visited);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

