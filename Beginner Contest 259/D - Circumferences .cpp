#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

int start_circle, end_circle; 

string ans = "No";

struct circle{
	long double x, y, r;
};

map<int,vector<int>> mem;

set<int> visited;

long double dist(long double x1, long double y1, long double x2, long double y2){
	return sqrt((x1 - x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void search(int cur, int goal){
	if(visited.count(cur)) return;
	if(cur == goal){
		ans = "Yes";
		return;
	}
	visited.insert(cur);
	for(int i : mem[cur]){
		search(i, goal);
	}
}

void solve(){
	long double n, sx, sy, tx, ty;
	cin >> n >> sx >> sy >> tx >> ty;
	vector<circle> v(n);
	REP(i,n) cin >> v[i].x >> v[i].y >> v[i].r;
	REP(i,n){
		if(dist(sx,sy,v[i].x,v[i].y) == v[i].r){
			start_circle = i;
		}
		if(dist(tx,ty,v[i].x,v[i].y) == v[i].r){
			end_circle = i;
		}
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(j != i){
				long double dis = dist(v[i].x, v[i].y, v[j].x, v[j].y);
				if(dis <= v[i].r + v[j].r && (dis + min(v[i].r,v[j].r) >= max(v[i].r,v[j].r))){
					mem[i].push_back(j);
				}
			}
		}
	}
	
	search(start_circle, end_circle);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

