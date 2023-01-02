#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int r, c; cin >> r >> c;
	r--;c--;
	vector<vector<bool>> v(15, vector<bool>(15));
	
	for(int i = 1; i <= 7; i += 2){
		for(int y = i; y < 15 - i; ++y) v[y][i] = 1;
		for(int x = i; x < 15 - i; ++x) v[i][x] = 1;
	}
	
	for(int i = 13; i> 7; i -= 2){
		for(int y = i; y >= 15 - i; --y) v[y][i] = 1;
		for(int x = i; x >= 15 - i; --x) v[i][x] = 1;
	}
	cout << (v[c][r] ? "white" : "black") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

