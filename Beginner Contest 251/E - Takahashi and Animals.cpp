#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int n;
int a[300005];
ll dp[300005][2];

void solve(){
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	
	ll ans = LLONG_MAX;
	for(int t = 0; t<= 1;++t){
		dp[1][t] = a[1]*t;
		dp[1][1-t] = 1e18;
	
		for(int i = 2; i <= n; ++i){
			dp[i][0] = dp[i-1][1];
			dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + a[i];
		}
		
		if(t == 0) ans = min(ans, dp[n][1]);
		if(t == 1) ans = min(ans, min(dp[n][0], dp[n][1]));
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

