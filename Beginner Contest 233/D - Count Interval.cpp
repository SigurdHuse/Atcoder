#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n, k; cin >> n >> k;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	unordered_map<ll,int> mem;
	ll cur = 0;
	for(int i = 0; i < n; ++i){
		cur += v[i];
		mem[cur]++;
	}
	for(int i = 1; i < n; ++i){
		v[i] += v[i-1];
	}
	ll ans = 0;
	for(ll j : v){
		ans += mem[k - j];
		ans += j == k;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

