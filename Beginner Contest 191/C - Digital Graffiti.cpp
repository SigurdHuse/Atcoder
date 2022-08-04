#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We count edges and then loop through and erase the counts that are connected

void solve(){
	int h, w; cin >> h >> w;
	vector<string> board(h);
	int ans = 0, x, y;
	
	REP(i,h) REP(j,w){
		if(board[i][j] == '#'){
			y = i - 1;
			x = j;
			break;
		}
	}
	// we go in x++ first
	int cur_y = y, cur_x = x;
	bool right = 1, down = 0, left = 0, up = 0;
	while(cur_x != x && cur_y != y){
		if(right){
			if(board[cur_y-1][cur_x] == '.'){
				right = 0;
				down = 1;
				ans ++;
			}
			else if(board[cur_y][cur_x+1] == '#'){
				right = 0;
				up = 1;
				ans++;
			}
			else cur_x++;
		}
		else if(down){
			if(board[cur_y][cur_x-1] == '.'){
				down = 0;
				left = 1;
				ans ++;
			}
			else if(board[cur_y+1][cur_x] == '#'){
				down = 0;
				right = 1;
				ans++;
			}
			else cur_y++;
		}
		else if(left){
			if(board[cur_y+1][cur_x] == '.'){
				left = 0;
				up = 1;
				ans ++;
			}
			else if(board[cur_y][cur_x-1] == '#'){
				left = 0;
				down = 1;
				ans++;
			}
			else cur_x--;
		}
		else if(up){
			if(board[cur_y][cur_x+1] == '.'){
				up = 0;
				right = 1;
				ans ++;
			}
			else if(board[cur_y-1][cur_x] == '#'){
				up = 0;
				left = 1;
				ans++;
			}
			else cur_y--;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

