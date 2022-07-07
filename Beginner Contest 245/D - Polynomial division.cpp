#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n+1),b, c(n+m+1);
	for(auto &x : a) cin >> x;
	for(auto &x : c) cin >> x;
	
	int l = m, r = m+n;
	while(l > -1){
		int fac = c[r]/a[n];
		for(int i = r, j = n; i >= l; --i, j--){
			c[i] -= fac*a[j];
		}
		b.push_back(fac);
		r--; l--;
	}
	reverse(all(b));
	for(int i : b) cout << i << " ";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

