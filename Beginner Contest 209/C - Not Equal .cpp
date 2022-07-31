#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

// For each we condition satisfy we have one less option for the next condition 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	ll ans = 1; 
	sort(all(v));
	for(int i = 0; i < n; ++i){
		if(v[i] - i <= 0){
			cout << 0 << endl;
			return;
		}
		ans *= (v[i] - i);
		ans %= M;
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

