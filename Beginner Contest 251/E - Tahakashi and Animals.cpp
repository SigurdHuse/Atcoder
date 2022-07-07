#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	vector<vector<ll>> dp(2,vector<ll>(n+1));
	dp[0][0] = v[0];
	for(int i = 1; i < n; ++i){
		
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

