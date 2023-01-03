#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<ll> a(n+1), b(n+1);
	for(int i = 1; i <= n; ++i) cin >> a[i];
	for(int i = 1; i <= n; ++i) cin >> b[i];
	
	for(int i = 1; i <= n; ++i){
		a[i] += a[i-1];
		b[i] += b[i-1];
	}
	int q; cin >> q;
	int x,y;
	
	while(q--){
		cin >> x >> y;
		
		cout << (a[x] == b[y] ? "Yes" : "No") << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

