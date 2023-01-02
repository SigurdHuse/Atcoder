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
	int n, c; cin >> n >> c;
	vector<pair<int,int>> op(n);
	for(auto &[t,a] : op) cin >> t >> a;
	
	vector<int> ans(n);
	for(int k = 0; k < 30; ++k){
		array<int,2> func = {0,1};
		int crr = bit(c,k);
		for(int i =0; i < n; ++i){
			array<int,2>f;
			int x = bit(op[i].second,k);
			if(op[i].f == 1) f = {0&x,1&x};
			if(op[i].f == 2) f = {0|x,1|x};
			if(op[i].f == 3) f = {0^x, 1 ^ x};
			func = {f[func[0]],f[func[1]]};
			crr = func[crr];
			ans[i] |= crr << k;
		}
	}
	for(int i = 0; i < n; ++i) cout << ans[i] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

