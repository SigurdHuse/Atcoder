#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll dp[5005][5005];

void solve(){
	int n, m; cin >> n >> m;
	REP(i,n+1) REP(j,n+1) dp[i][j] = -1;
	vector<int> value(n+1);
	for(int i = 0; i < n; ++i) cin >> value[i];
	
	vector<int> prize(n+1);
	int c, y;
	for(int i =0 ; i <m; ++i){
		cin >> c >> y;
		prize[c] = y;
	}
	
	dp[0][0] = 0;
	
	for(int i = 0; i <= n; ++i){
		// add streak bonus
		for(int j = 0; j <= n; ++j){
			if(dp[i][j] != -1)dp[i][j] += prize[j];
		}
		
		// find next step
		for(int j = 0; j <= n; ++j){
			if(dp[i][j] != -1){
				dp[i+1][j+1] = max(dp[i][j] + value[i], dp[i+1][j+1]);
				dp[i+1][0] = max(dp[i][j], dp[i+1][0]);
			}
		}
	}
	//for(int i = 0; i<=n; ++i){
	//	for(int j = 0; j <= n; ++j) cout << dp[i][j] << " ";
	//	cout << endl;
	//}
	
	ll ans = 0;
	for(int j = 0; j <= n; ++j){
		ans = max(ans, dp[n][j]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

