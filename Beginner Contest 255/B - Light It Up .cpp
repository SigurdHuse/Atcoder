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
	vector<int> a(k);
	
	for(auto &A : a){
		cin >> A;
		A--;
	}
	for(auto &[x,y] : v) cin >> x >> y;
	
	vector<double> distance(n, DBL_MAX);
	
	for(int i = 0; i < k; ++i){
		distance[a[i]] = 0;
		for(int j = 0; j < n; ++j){
			if(j == a[i]) continue;
			double dist = sqrt(pow(v[j].f-v[a[i]].f,2) + pow(v[j].s - v[a[i]].s,2));
			distance[j] = min(distance[j], dist);
		}
	}
	cout << setprecision(16);
	cout << *max_element(all(distance)) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

