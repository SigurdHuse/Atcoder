#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >>k;
	vector<ll> a(n), b(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	vector<ll> dp(n+1,false),ep(n+1,false);
	
	dp[1] = ep[1] = true;
	
	for(ll i = 2; i <= n; ++i){
		if(dp[i-1]){
			if(abs(a[i-1] - a[i]) <= k) dp[i] =true;
			if(abs(a[i-1] - b[i]) <= k) ep[i] = true;
		}
		if(ep[i-1]){
			if(abs(b[i-1] - a[i]) <= k)dp[i] = true;
			if(abs(b[i-1] - b[i] <= k)) ep[i] = true;
		}
	}
	
	if(dp[n] || ep[n]) cout << "Yes" <<endl;
	else cout << "No" << endl; 
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

