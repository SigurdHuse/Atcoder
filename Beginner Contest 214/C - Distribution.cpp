#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Each creature is represented as time until it gives away and minimum until it gives away
// We then just loop through and greedily choose minimum time
// This is dp-ish

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	REP(i,n) cin >> v[i].first;
	REP(i,n) cin >> v[i].second;
	
	for(int i = 0; i < 2*n; ++i){
		v[(i+1)%n].second = min(v[(i+1)%n].second, v[i%n].second + v[i%n].second);
	}
	
	for(auto p : v) cout << p.second << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

