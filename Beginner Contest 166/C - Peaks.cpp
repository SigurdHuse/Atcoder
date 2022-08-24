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
	vector<int> h(n);
	for(auto &a : h) cin >> a;
	
	vector<vector<int>> road(n);
	int a, b;
	while(m--){
		cin >> a >> b;
		a--; b--;
		road[a].push_back(b);
		road[b].push_back(a);
	}
	
	bool high[n];
	memset(high, false, sizeof(high));
	
	int ans = 0;
	
	for(int i = 0; i < n; ++i){
		if(high[i]) continue;
		if(road[i].empty()){
			ans++;
			continue;
		}
		bool ok = 1;
		for(int j : road[i]){
			if(h[j] >= h[i]){
				ok = 0;
			}
			else high[j] = 1;
		}
		ans += ok;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

