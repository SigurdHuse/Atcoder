#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Need to check if third point is on the line between two points
// The rest if brute force of all possible combinations of points

const double pi = 3.141592653589793;

bool is_triangle(long double x1, long double y1, long double x2, long double y2, long double x3, long double y3){
	pair<long double,long double> v1 = {x2-x1,y2-y1};
	//cout << v1.first << " " << v1.second << " " << x3 << " " << y3 << endl;
	if(v1.first == 0) return x3 != x1;
	if(v1.second == 0) return y3 != y1;
	long double factor1 = (x3-x1)/v1.first;
	long double factor2 = (y3-y1)/v1.second; 
	return factor1 != factor2;
}

void solve(){
	int n; cin >> n; 
	vector<pair<long double,long double>> v(n);
	ll ans = 0;
	for(auto &[x,y] : v) cin >> x >> y;
	for(int i = 0; i< n; ++i){
		for(int j = i+1; j < n; ++j){
			for(int k = j+1; k < n; ++k){
				//cout << v[i].first<< " "<< v[i].second << " " << v[j].first << " " << v[j].second << " " << v[k].first << " "  << v[k].second<< endl;
				ans += is_triangle(v[i].first, v[i].second,v[j].first,v[j].second, v[k].first,v[k].second);
			}
		}
	}
	cout << ans << endl;
} 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

