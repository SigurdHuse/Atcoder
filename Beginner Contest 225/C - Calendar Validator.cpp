#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<vector<ll>> v(n, vector<ll>(m));
	REP(i,n) REP(j,m) cin >> v[i][j];
	
	// first check each col increase by 7
	// then check each row increase by 1
	
	for(int i = 0; i < m; ++i){
		for(int j = 1; j < n; ++j){
			if(v[j][i] - v[j-1][i] != 7){
				cout << "No" << endl;
				return;
			}
		}
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 1; j < m; ++j){
			if(v[i][j] - v[i][j-1] != 1){
				cout << "No" << endl;
				return;
			}
		}	
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

