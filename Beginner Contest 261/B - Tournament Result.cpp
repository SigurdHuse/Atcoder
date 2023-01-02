#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Check if matrix is symmetric

void solve(){
	int n; cin >> n;
	vector<vector<char>> v(n, vector<char>(n));
	
	REP(i,n) REP(j,n) cin >> v[i][j];
	
	map<char,char> val;
	val['D'] = 'D';
	val['L'] = 'W';
	val['W'] = 'L';
	
	for(int i = 0; i < n; ++i){
		for(int j = i+1; j < n; ++j){
			if(val[v[i][j]] != v[j][i]){
				cout << "incorrect" << endl;
				return;
			}
		}
	}
	cout << "correct" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

