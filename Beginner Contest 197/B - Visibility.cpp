#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int h, w, x, y; cin >> h >> w >>x >> y;
	vector<string> v(h);
	for(auto &s : v) cin >> s;
	x--; y--;
	
	if(v[x][y] == '#'){
		cout << 0 << endl;
		return;
	}
	
	int ans =1;
	
	for(int i = x+1; i < h; ++i){
		if(v[i][y] == '#') break;
		ans++;
	}
	for(int i = x-1; i > -1; --i){
		if(v[i][y] == '#') break;
		ans++;
	}
	
	for(int j = y + 1; j < w; ++j){
		if(v[x][j] == '#') break;
		ans++;
	}
	
	for(int j = y-1; j > - 1; --j){
		if(v[x][j] == '#') break;
		ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

