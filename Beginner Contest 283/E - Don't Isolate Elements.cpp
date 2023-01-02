#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int h, w;
bool v[1005][1005];

int neig[1005][1005];

void fill_neig(){
	for(int y = 1; y <= h; ++y){
		for(int x = 1; x <= w; ++x){
			int cur = 0;
			if(y!= 1 && (v[y-1][x] == v[y][x])) cur++;
			if(y != w && (v[y+1][x] == v[y][x])) cur++;
			
			if(x != 1 && (v[y][x-1] == v[y][x])) cur++;
			if(x != w && (v[y][x+1] == v[y][x])) cur++;
			
			neig[y][x] = cur;
		}
	}
}


void solve(){
	cin >> h >> w;
	REP(i,1005) REP(j,1005) v[i][j] = 0;
	
	for(int i = 1; i <= h; ++i){
		for(int j = 1; j <= w; ++j){
			cin >> v[i][j];
		}
	}
	fill_neig();
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

