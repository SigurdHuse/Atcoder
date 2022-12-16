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
	vector<string> v(h);
	for(auto &s : v) cin >> s;
	
	int ans = 0;
	
	for(int i = 0; i < h; ++i){
		for(int j = 0; j < w; ++j){
			if(v[i][j] == '#') ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

