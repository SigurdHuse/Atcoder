#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, q, k; cin >> n >> q;
	vector<ll> v(n), low(n);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i <n; ++i){
		low[i] = v[i] - (i + 1);
	}
	
	REP(i, q){
		cin >> k;
		
		const int idx = lower_bound(all(low),k) - low.begin();
		
		if(idx == n){
			cout << v[n-1] + (k + low[n-1]) << endl;
		}
		
		else{
			cout << v[idx] - (low[idx] - k + 1) << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

