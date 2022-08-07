#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int ans = 0;
	for(int l = 0; l < n; ++l){
		int x = v[l];
		for(int r = l; r < n; ++r){
			x = min(x, v[r]);
			ans = max(ans, x * (r - l + 1));
		}
	}
	cout << ans << endl;
} 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

