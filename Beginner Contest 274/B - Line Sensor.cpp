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
	for(auto &a : v) cin >> a;
	
	for(int x = 0; x < w; ++x){
		int cnt = 0;
		for(int y = 0; y < h; ++y){
			if(v[y][x] == '#') cnt++;
		}
		cout << cnt << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

