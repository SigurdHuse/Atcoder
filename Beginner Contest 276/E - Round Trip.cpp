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
	
	vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0}, {0,-1}};
	
	int start_x, start_y;
	REP(i,h){
		REP(j,w){
			if(v[i][j] == 'S'){
				start_y = i;
				start_x = j;
				break;
			}
		}
	}
	
	stack<tuple<int,int, int>> q;
	q.push({start_y, start_x, 0});
	vector<vector<bool>> visited(h, vector<bool>(w));
	
	while(q.size()){
		auto p = q.top();
		q.pop();
		int x = get<1>(p), y = get<0>(p), cnt = get<2>(p);
		//cout << y << " " << x << endl;
		if(cnt >= 3){
			for(auto l : dir){
				if((x + l.f < w) && (x + l.f >= 0)){
					if((y + l.s < h) && (y + l.s >= 0)){
						if(v[y+l.s][x + l.f] == 'S'){
							cout << "Yes" << endl;
							return;
						}
					}
				}
			}
		}
		if(visited[y][x]) continue;
		visited[y][x] = 1;
		
		//for(auto o : visited){
		//	for(auto b : o) cout << b;
		//	cout << endl;
		//}
		//cout << endl;
		for(auto l : dir){
			if((x + l.f < w) && (x + l.f >= 0)){
				if((y + l.s < h) && (y + l.s >= 0)){
					if((v[y+l.s][x + l.f] == '.') && (!visited[y+l.s][x+l.f])){
						//visited[y+l.s][x + l.f] = 1;
						q.push({y + l.s, x + l.f, cnt +1});
					}
				}
			}
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

