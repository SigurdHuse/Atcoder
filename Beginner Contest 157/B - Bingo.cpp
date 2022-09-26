#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<vector<int>> v(3, vector<int>(3));
	REP(i,3) REP(j,3) cin >> v[i][j];
	
	int n, b; cin >> n;
	vector<bool> mem(101);
	while(n--){
		cin >> b;
		mem[b] = 1;
	}
	REP(i, 3){
		REP(j,3){
			if(mem[v[i][j]]) v[i][j] = -1;
		}
	}
	int cnt = 0;
	bool bingo = 0;
	REP(i, 3){
		cnt = 0;
		REP(j, 3){
			cnt += v[i][j] == -1;
		}
		if(cnt == 3) bingo = 1;
	}
	
	REP(i, 3){
		cnt = 0;
		REP(j, 3){
			cnt += v[j][i] == -1;
		}
		if(cnt == 3) bingo = 1;
	}
	if(v[0][0] + v[1][1] + v[2][2] == -3) bingo = 1;
	if(v[2][0] + v[1][1] + v[0][2] == -3) bingo = 1;
	cout << (bingo ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

