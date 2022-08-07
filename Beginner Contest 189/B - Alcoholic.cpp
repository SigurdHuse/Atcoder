#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, x; cin >> n >> x;
	x *= 100;
	vector<pair<int,int>> v(n);
	for(auto &[a, b] : v) cin >> a >> b;
	int cur = 0;
	
	for(int i = 0; i < n; ++i){
		cur += v[i].f*v[i].s;
		if(cur > x){
			cout << i + 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

