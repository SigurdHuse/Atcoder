#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int y = 0, x = 0;
	int h, w; cin >> h >> w;
	vector<string> v(h);
	for(auto &a : v) cin >> a;
	
	while(v[y][x] != '1'){
		int nx = x, ny = y;
		if(v[y][x] == 'U'){
			ny = y-1;
			if(ny < 0) break;
		}
		else if(v[y][x] == 'D'){
			ny = y+1;
			if(ny == h) break;
		}
		else if(v[y][x] == 'R'){
			nx = x + 1;
			if(nx == w) break;
		}
		else if(v[y][x] == 'L'){
			nx = x - 1;
			if(nx < 0) break;
		}
		v[y][x] = '1';
		y = ny;
		x = nx;
	}
	if(v[y][x] == '1'){
		cout << -1 << endl;
	}
	else cout << y +1 << " " << x + 1<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

