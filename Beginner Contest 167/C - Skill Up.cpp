#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We brute force all ways to pick books and choose the optimal cost

vector<vector<int>> perm;

int n, m, x; 

void generate(vector<int> mem, int cur){
	if(cur == n){
		perm.push_back(mem);
		return;
	}
	for(int i = 0; i <= n; ++i){
		if(i > cur){
			vector<int> tmp = mem;
			mem.push_back(i);
			generate(tmp, i);
		}
	}
}

void solve(){
	cin >> n >> m >> x;
	REP(i,n) generate({i}, i);
	vector<vector<int>> v(n, vector<int>(m+1));
	
	REP(i,n) REP(j, m+1) cin>> v[i][j];
	int mx = INT_MAX;
	
	for(auto p : perm){
		vector<int> cnt(m, 0);
		int cost = 0;
		for(int i : p){
			cost += v[i][0];
			for(int j = 1; j < m+1; ++j){
				cnt[j-1] += v[i][j];  
			}
			if(all_of(all(cnt), [](int l){return l >= x;})){
				mx = min(cost, mx);
			}
		}
	}
	cout << (mx == INT_MAX ? -1 : mx) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

