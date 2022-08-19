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
	double d; cin >> d;
	vector<pair<double,double>> v(n);
	for(auto &[x,y] : v) cin >> x >> y;
	int ans = 0;
	for(auto p : v){
		if(sqrt(p.f*p.f + p.s*p.s) <= d) ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

