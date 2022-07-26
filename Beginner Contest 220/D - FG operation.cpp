#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// want to solve using dp
// we always delete the left most digit
// just keep track of everything possible
// Very pleased having solved this, have improved so much solving dp problems


const ll M = 998244353;

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	vector<vector<ll>> dp(n, vector<ll>(10));
	dp[0][(v[0] + v[1])%10]++;
	dp[0][(v[0] * v[1])%10]++;

	for(int i = 2; i < n; ++i){
		for(int j = 0; j < 10; ++j){
			if(dp[i-2][j]){
				dp[i-1][(j + v[i])%10] += dp[i-2][j];
				dp[i-1][(j * v[i])%10] += dp[i-2][j];
				dp[i-1][(j + v[i])%10] %= M;
				dp[i-1][(j * v[i])%10] %= M;
			}
		}
	}
	
	for(int j = 0; j < 10; ++j){
		cout << dp[n-2][j] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

