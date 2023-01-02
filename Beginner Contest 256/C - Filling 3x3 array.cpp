#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int board[3][3];

int h1, h2, h3, w1, w2, w3;

bool is_valid(){
	bool one = (board[2][0] + board[2][1] + board[2][2]) == h3;
	return one; 
}

void solve(){
	int ans = 0;
	cin >> h1 >> h2 >> h3 >> w1 >> w2 >>w3;
	for(int i = 1; i <= h1 - 2; ++i){
		for(int j = 1; j <= h1 - i - 1; ++j){
			board[0][0] = i;
			board[0][1] = j;
			board[0][2] = h1 - i - j;
			for(int k = 1; k <= h2 - 2; ++k){
				for(int u = 1; u <= h2 - k - 1; ++u){
					board[1][0] = k;
					board[1][1] = u;
					board[1][2] = h2 - k - u;
					
					board[2][0] = w1 - board[0][0] - board[1][0];
					board[2][1] = w2 - board[0][1] - board[1][1];
					
					board[2][2] = h3 - board[2][0] - board[2][1];
					if(board[2][2] == (w3 - board[1][2] - board[0][2])){
						if(board[2][0] <= 0 || board[2][1] <= 0 || board[2][2] <= 0) ans--;
						ans++;
					}
				}
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

