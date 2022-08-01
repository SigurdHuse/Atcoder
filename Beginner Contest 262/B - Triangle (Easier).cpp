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
	vector<set<int>> v(n);
	int u, k;
	REP(i,m){
		cin >> u >> k;
		u--;k--;
		v[u].insert(k);
		v[k].insert(u);
	}
	int ans = 0;
	for(int a = 0; a< n; ++a){
		for(int b = a+1; b < n; ++b){
			for(int c = b+1; c < n; ++c){
				if(v[a].count(b) && v[b].count(c) && v[c].count(a)) ans++;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

