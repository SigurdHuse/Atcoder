#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	ll ans = 0; 
	for(int i = 0; i < n; ++i){
		if(n - i < k) break;
		if(v[i] != 0){
			ans += v[i];
			for(int j = i+1; j < i+k; ++j){
				v[j] -= v[i];
			}
			v[i] = 0;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

