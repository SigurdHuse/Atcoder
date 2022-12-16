#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Sliding window

void solve(){
	int H, W, N, h, w; 
	cin >> H >> W >> N >> h >> w;
	
	vector<vector<int>> v(H, vector<int>(W));
	vector<int> cnt(N+1);
	
	int ans = 0;
	
	REP(i,H) REP(j,W){
		cin >> v[i][j];
		if(cnt[v[i][j]]++ == 0) ans++;
	}
	
	for(int y_off = 0; y_off <= H- h; ++y_off){
		for(int x_off = 0; x_off <= W-w; ++x_off){
			int new_ans = ans;
			vector<int> tmp(all(cnt));
			
			for(int x = x_off; x < x_off + w; ++x){
				for(int y = y_off; y < y_off+h; ++y){
					tmp[v[y][x]]--;
					if(tmp[v[y][x]] == 0) new_ans--;
				}
			}
			cout << new_ans << " ";
		}
		cout << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

