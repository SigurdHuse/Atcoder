#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll MOD = 998244353;

// The number of paths are three doubled each iteration

void solve(){
	int n, m; cin >> n >> m;
	
	vector<pair<int,int>> dxy(3);
	int a, b;
	for(int i =0 ; i < 3; ++i){
		cin >> a >> b;
		dxy[i] = {a,b};
	}
	
	set<pair<int,int>> S;
	for(int i = 0; i <m; ++i){
		cin >> a >> b;
		S.insert({a,b});
	}
	
	map<pair<ll,ll>, ll> dp;
	
	dp[{0,0}] = 1;
	for(int i = 0; i <n; ++i){
		map<pair<ll,ll>, ll> new_dp;
		for(auto[xy,val] : dp){
			auto[x,y] = xy;
			for(auto[dx,dy] : dxy){
				if(!S.count({x+dx,y+dy})){
					new_dp[{x+dx,y+dy}] += val;
					new_dp[{x+dx,y+dy}] %= MOD;
				}
			}
		}
		swap(dp, new_dp);
	}
	ll ans = 0;
	for(auto[_,val]: dp){
		ans = (ans + val) % MOD;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

