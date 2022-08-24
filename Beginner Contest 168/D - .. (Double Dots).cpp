#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// cycle problem

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<int>> v(n);
	vector<int> ans(n, -1);
	int a, b; 
	while(m--){
		cin >> a >> b;
		a--; b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	deque<int> q;
	q.push_back(0);
	
	while(!q.empty()){
		int cur = q.front();
		q.pop_front();
		for(int i : v[cur]){
			if(ans[i] == -1){
				ans[i] = cur+1;
				q.push_back(i);
			}
		}
	}
	for(int i = 1; i< n; ++i){
		if(ans[i] == -1){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
	for(int i = 1;i < n; ++i){
		cout << ans[i] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

