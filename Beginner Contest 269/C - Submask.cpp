#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

set<ll> ans;

void search(ll cur, vector<ll> &v){
	if(ans.count(cur)) return;
	ans.insert(cur);
	
	for(ll i : v){
		search(cur ^ i, v);
	}
}

void solve(){
	ll n; cin >> n;
	ll cur = 1, x = n;
	vector<ll> pos;
	
	while(n > 0){
		if(n & 1){
			pos.push_back(cur);
		}
		n >>= 1;
		cur <<= 1;
	}
	
	search(x, pos);
	for(ll i : pos) ans.insert(i);
	
	for(ll i : ans) cout << i<< endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

