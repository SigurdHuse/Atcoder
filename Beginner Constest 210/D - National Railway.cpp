#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// DP problem
// We just need to construct one railway
// Fill the edges and then determine recurrence relation

void solve(){
	int h, w, c; cin >> h >> w >> c;
	vector<vector<ll>> A(h, vector<ll>(w));
	REP(i,h) REP(j, w) cin >> A[i][j];
	vector<vector<ll>> dp(h+1, vector<ll>(w+1, INT_MAX));
	
	for(int i = 1; i <= h; ++i){
		for(int j = 1; j <= w; ++j){
			dp[i][j] = min({A[i-1][j-1], dp[i-1][j] + c, dp[i][j-1] + c});
		}
	}
	vector<vector<ll>> X(h, vector<ll>(w, INT_MAX));
	ll ans = LONG_LONG_MAX;
	
	for(int i = 0; i < h; ++i){
		for(int j = 0; j < w; ++j){
			X[i][j] = min(dp[i][j+1] + c + A[i][j], dp[i+1][j] + c + A[i][j]);
			ans = min(ans, X[i][j]);
		}
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

