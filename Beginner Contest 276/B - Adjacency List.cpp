#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	
	vector<vector<int>> v(n+1);
	
	int a, b; 
	
	while(m--){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(auto &tmp : v){
		sort(all(tmp));
	}
	
	for(int i = 1; i<= n; ++i){
		cout << SZ(v[i]);
		for(int j : v[i]) cout << " " << j;
		cout << endl; 
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

