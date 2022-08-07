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
	vector<pair<double,double>> v(n);
	for(auto &[x,y] : v) cin >> x >> y;
	
	ll ans = 0;
	
	for(int i = 0; i < n; ++i){
		double x1 = v[i].f, y1 = v[i].s;
		for(int j = i + 1; j < n; ++j){
			double x2 = v[j].f, y2 = v[j].s;
			if(x1 == x2) continue;
			double slope = (y2 - y1) / (x2 - x1);
			
			if(abs(slope) <= 1) ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

