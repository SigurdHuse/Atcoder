#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<pair<double,double>> v(n);
	REP(i,n)cin >> v[i].first >> v[i].second;
	long double ans = 0;
	for(int i = 0; i < n; ++i){
		long double x1 = v[i].first, y1 = v[i].second;
		for(int j = 0; j < n; ++j){
			long double tmp;
			long double x2 = v[j].first, y2 = v[j].second;
			tmp = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
			ans = max(ans, tmp);
		}
	}
	cout << setprecision(16) << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

