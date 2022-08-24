#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Try to count number of tens;

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	int ten_cnt = 0;
	ll tmp = 1;
	for(ll i : v){
		ll cpy = i;
		if(cpy == 0){
			cout << 0 << endl;
			return;
		}
		while(cpy > 0){
			if(cpy >= 10) ten_cnt++;
			else tmp *= cpy;
			cpy /= 10;
		}
		while(tmp >= 10){
			ten_cnt++;
			tmp /= 10;
		}
	}
	if(ten_cnt > 18){
		cout << -1 << endl;
		return;
	}
	ll ans = 1;
	for(ll i : v ) ans *= i;
	cout << (ans > (ll)1e18 ? -1 : ans) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

