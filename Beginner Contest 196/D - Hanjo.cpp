#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// If a == 0 it's always possible to fill in the rest
// We then bruteforce all options and represent vertical as 2 and horizontal as 3

int h, w; 

int ans = 0;

set<vector<vector<int>>> mem;

void print(vector<vector<int>> &v){
	for(auto p : v){
		for(auto i : p) cout << i << " ";
		cout << endl; 
	}
	cout << endl;
}

void search(int a, int b, vector<vector<int>> v){
	if(a == 0){
		if(!mem.count(v)){
			ans++;
		}
		mem.insert(v);
		return;
	}
	if(mem.count(v)) return;
	for(int i = 0; i < h; ++i){
		for(int j = 0; j < w; ++j){
			vector<vector<int>> tmp = v, tmp1 = v;
			if(i == h-1 && j == w-1) break;
			
			if(i == h-1){
				if(tmp[i][j] == 0 && tmp[i][j+1] == 0){
					tmp[i][j] = 3;
					tmp[i][j+1] = 3;
					mem.insert(v);
					search(a-1, b, tmp);
				}
			}
			else if(j == w - 1){
				if(tmp[i][j] == 0 && tmp[i+1][j] == 0){
					tmp[i][j] = 2;
					tmp[i+1][j] = 2;
					mem.insert(v);
					search(a-1, b, tmp);
				}
			}
			else{
				if(tmp[i][j] == 0 && tmp[i+1][j] == 0){
					tmp[i][j] = 2;
					tmp[i+1][j] = 2;
					mem.insert(v);
					search(a-1, b, tmp);
				}
				if(tmp1[i][j] == 0 && tmp1[i][j+1] == 0){
					tmp1[i][j] = 3;
					tmp1[i][j+1] = 3;
					mem.insert(v);
					search(a-1, b, tmp1);
				}
			}
		}
	}
}

void solve(){
	int a, b; cin >> h >> w >> a >> b;
	vector<vector<int>> board(h, vector<int>(w));
	search(a, b, board);
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

