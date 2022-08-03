#include <bits/stdc++.h>
#define REP(i,n) for(int i = 1; i<= (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int f(char c){
	if(c == '-') return -1;
	return 1;
}

void solve(){
	int h, w; cin >> h >> w;
	vector<vector<char>> board(h+2, vector<char>(w+2));
	REP(i,h) REP(j,w) cin >> board[i][j];
	
	vector<vector<int>> opt(h+2, vector<int>(w+2));
	
	for(int i = h; i > 0; --i){
		for(int j = w; j > 0; --j){
			//if(i+1 > h || j + 1 > w) continue;
			if((i+j)%2){
				opt[i][j] = min(opt[i+1][j] - f(board[i+1][j]), opt[i][j+1] - f(board[i][j+1]));
			}
			else{
				opt[i][j] = max(opt[i+1][j] + f(board[i+1][j]), opt[i][j+1] + f(board[i][j+1]));
			}
		}
	}
	/*
	for(auto v : opt){
		for(int i : v) cout << i << " ";
		cout << endl;
	}
	*/
	if(opt[1][1] > 0)cout << "Takahashi" << endl;
	else if(opt[1][1] < 0)cout << "Aoki" << endl;
	else cout << "Draw" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

