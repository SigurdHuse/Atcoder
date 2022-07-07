#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int h, w; cin >> h >> w;
	int matrix[h][w];
	REP(i,h)REP(j,w) cin >> matrix[i][j];
	REP(i, w){
		REP(j,h){
			cout << matrix[j][i];
			cout << " ";
		}
		cout << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

