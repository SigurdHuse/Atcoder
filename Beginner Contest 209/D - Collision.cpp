#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We need to find the shortest path and determine if
// the number of steps are odd or even

void solve(){
	int n, Q; cin >> n >> Q;
	vector<vector<int>> v(n);
	int a, b;
	REP(i,n-1){
		cin >> a >> b;
		a--; b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	queue<int> que;
	vector<int> dis(n,-1);
	
	que.push(0);
	dis[0] = 0;
	while(!que.empty()){
		int t = que.front(); que.pop();
		for(int x : v[t]) if(dis[x] == -1){
			dis[x] = dis[t] + 1;
			que.push(1);
			que.push(x);
		}
	}
	for(int i = 0; i < Q; ++i){
		cin >> a >> b;
		if(dis[a-1]%2 == dis[b-1]%2) cout << "Town" << endl;
		else cout << "Road" << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

