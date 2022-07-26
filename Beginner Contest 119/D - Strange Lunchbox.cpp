#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// will use knapsack

void solve(){
	int n, x, y; cin >> n >> x >> y;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a>> b;
	
	vector<vector<int>> dp(x+1, vector<int>(y+1, INT_MAX));
	dp[x][y] = 0;
	set<pair<int,int>> mem;
	//dp[x - v[0].first][y - v[0].second] = 1;
	for(int k =0; k < n; ++k){
		for(int i = x; i >= 0; i--){
			for(int j = y; j>= 0; j--){
				if(dp[i][j] != INT_MAX && !mem.count({i,j})){
					int new_y = max(0, j - v[k].second), new_x = max(0, i - v[k].first);
					dp[new_x][new_y] = min(dp[i][j] + 1, dp[new_x][new_y]);
					mem.insert({new_x,new_y});
				}
			}
		}
		mem.clear();
	}
	/*
	for(auto p : dp){
		for(int j : p) cout << j << " ";
		cout << endl;
	}
	*/
	cout << (dp[0][0] != INT_MAX ? abs(dp[0][0]) : -1) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

