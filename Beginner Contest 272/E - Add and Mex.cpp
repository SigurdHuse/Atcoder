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
	vector<int> a(n);
	for(auto &v : a) cin >> v;
	
	vector<vector<int>> vals(m+1);
	
	for(int i = 0; i < n; ++i){
		if(a[i] >= n) continue;
		int l = (a[i] >= 0 ? 1 : (-a[i] + i) / (i+1));
		int r = min(m+1, (n - a[i] + i)/(i+1));
		
		for(int j = l; j < r; ++j){
			vals[j].push_back(a[i] + (i+1)*j);
		}
	}
	
	for(int i = 1; i <= m; ++i){
		int sz = SZ(vals[i]);
		vector<bool> exi(sz + 1);
		for(auto v : vals[i]){
			if(v < sz) exi[v] = true;
		}
		int res = 0;
		while(exi[res]) res++;
		cout << res << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

