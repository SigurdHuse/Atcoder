#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n;
ll k;
ll a[200010];

int f(ll m){
	ll s= 0;
	for(int i = 0; i < n; ++i) s += min(m, a[i]);
	return s <= k;
}

void solve(){
	cin >> n >> k;
	REP(i,n) cin >> a[i];
	
	ll l  = 0, r = 1e12 + 2;
	
	while(r - l > 1){
		ll m = (l + r)/2;
		if(f(m)) l = m;
		else r = m;
	}
	for(int i = 0; i < n; ++i){
		ll d = min(l, a[i]);
		a[i] -= d;
		k -= d;
	}
	
	for(int i = 0; k > 0; ++i){
		if(a[i]){
			a[i]--;
			k--;
		}
	}
	REP(i,n) cout << a[i] << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

