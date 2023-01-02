#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

vector<pair<int,int>> dirs = {{-1,-1}, {-1,0}, {0,-1},{0,1},{1,0},{1,1}};

const int off = 1e3 + 2;

vector<vector<bool>> board(2*off, vector<bool>(2*off));

void search(int i, int j){
	if(i < 0 || i >= 2*off || j < 0 || j>= 2*off) return;
	if(!board[i][j]) return;
	board[i][j] = 0;
	
	for(auto p : dirs){
		search(i + p.f, j + p.s);
	}
}

void solve(){
	int n; cin >> n;
	int x, y;
	REP(i,n){
		cin >> x >> y;
		board[x + off][y + off] = 1;
	}
	
	int ans = 0;
	
	for(int i = 0; i < 2*off; ++i){
		for(int j = 0; j < 2*off; ++j){
			if(board[i][j]){
				ans++;
				search(i,j);
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

