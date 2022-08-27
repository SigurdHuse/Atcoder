#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, m; cin >> n >> m;
	vector<int> v(m);
	for(auto &a : v) cin >> a;
	
	ll s = accumulate(all(v),0);
	
	cout << max(-1ll, n - s) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

