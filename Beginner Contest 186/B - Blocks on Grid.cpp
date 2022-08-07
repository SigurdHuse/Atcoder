#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int h, w; cin >> h >> w;
	vector<vector<int>> v(h, vector<int>(w));
	
	int mi = INT_MAX;
	
	REP(i,h) REP(j,w){
		cin >>v[i][j];
		mi = min(mi, v[i][j]);
	}
	ll ans = 0;
	REP(i,h) REP(j, w){
		ans += v[i][j] - mi;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

