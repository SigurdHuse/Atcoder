#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 998244353;

void solve(){
	int n; cin >> n;
	vector<ll> dp(9, 1), new_dp(9);
	
	for(int i = 0; i < n-1; ++i){
		new_dp[0] = (dp[0] + dp[1]) % M;
		new_dp[8] = (dp[8] + dp[7]) % M;
		
		for(int j = 1; j < 8; ++j){
			new_dp[j] = (dp[j-1] + dp[j] + dp[j+1]) % M;
		}
		swap(dp, new_dp);
	}
	ll ans = 0;
	for(int i = 0; i < 9; ++i){
		ans = (ans + dp[i]) % M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

