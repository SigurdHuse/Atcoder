#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

int h, w, ans = 0;

void search(int row, int col, vector<vector<char>> &board, int steps){
	if(row >= h || col >= w || board[row][col] == '#'){
		ans = max(ans, steps);
		return;
	}
	board[row][col] = '#';
	search(row + 1, col, board, steps+1);
	search(row, col + 1, board, steps + 1);	
}

void solve(){
	cin >> h >> w;
	vector<vector<char>> board(h,vector<char>(w));
	REP(i,h) REP(j,w) cin >> board[i][j];
	search(0,0,board,0);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

