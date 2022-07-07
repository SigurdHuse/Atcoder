#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

ll ans = 0;

void rec(ll depth, ll cur, vector<vector<ll>> &v, ll x, ll n){
	if(depth == n || cur > x){
		//cout << cur << endl;
		ans += cur == x;
		return;
	}
	for(ll j : v[depth]){
		rec(depth + 1, cur * j, v, x, n);
	}
}

void solve(){
	ll n, x,l;
	cin >> n >> x;
	vector<vector<ll>> v(n);
	REP(i,n){
		cin >> l;
		vector<ll> tmp(l);
		for(auto &a : tmp) cin >> a;
		v[i] = tmp;
	}
	rec(0ll, 1ll, v, x, n);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

