#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	ll l = -2e18, r = 2e18;
	
	while(r - l > 1){
		ll mid = (l + r)/2;
		ll c = 0;
		for(int i = 0; i < n; ++i){
			if(v[i] > 0){
				c += upper_bound(all(v), (long  double) mid/ v[i]) - v.begin();
			}
			else if(v[i] < 0){
				c += n - (lower_bound(all(v), (long double) mid/v[i]) - v.begin());
			}
			else if(mid >= 0){
				c += n;
			}
			if(v[i]*v[i] <= mid) c--;
		}
		if(k*2 <= c) r = mid;
		else l = mid;
	}
	cout << r << endl;
}
	

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

