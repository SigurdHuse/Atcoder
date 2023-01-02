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
	vector<int> v(n);
	for(auto &a : v) cin>> a;
	
	int q; cin >> q;
	
	int t, k, x;
	
	while(q--){
		cin >> t;
		if(t == 1){
			cin >> k >> x;
			v[k-1] = x;
		}
		else{
			cin >> k;
			cout << v[k-1] << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

