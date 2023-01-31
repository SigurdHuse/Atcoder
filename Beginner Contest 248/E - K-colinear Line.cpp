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
	int n, k; cin >> n >> k;
	vector<pair<double,double>> v(n);
	
	for(auto &[x,y] : v) cin >> x >> y; 
	
	if(k == 1){
		cout << "Infinity" << endl;
		return;
	}
	double eps = 1e-6;
	ll ans = 0;
	for(int i = 0; i< n; ++i){
		for(int j = i+1; j <n; ++j){
			if(v[i].f == v[j].f) continue;
			double grad = (v[i].s - v[j].s)/(v[i].f - v[j].f);
			cout << grad << endl;
			int cnt = 0;
			for(int t = 0; t < n; ++t){
				if(t == i || t == j) continue;
				if(abs(v[t].f*grad + v[i].s - v[t].s) < eps) cnt++;
			}
			if(cnt >= k) ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

