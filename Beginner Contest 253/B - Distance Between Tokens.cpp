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
	int x1 = -1, x2 = -1, y2 = -1, y1 = -1;
	
	REP(i,h){
		REP(j,w){
			if(v[i][j] == 'o'){
				if(x1 == -1){
					x1 = j;
					y1 = i;
				}
				else{
					x2 = j;
					y2 = i;
				}
			}
		}
	}
	cout << abs(x2 - x1) + abs(y2 - y1)<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

