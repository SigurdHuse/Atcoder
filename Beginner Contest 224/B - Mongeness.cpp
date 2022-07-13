#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Brute force, check all possible configurations

void solve(){
	int h, w; cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	REP(i,h) REP(j,w) cin>> a[i][j];
	
	for(int i2 = 1; i2 < h; ++i2){
		for(int i1 = i2-1; i1 >= 0; --i1){
			for(int j2 = 1; j2 < w; ++j2){
				for(int j1 = j2-1; j1 >= 0; --j1){
					if(a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]){
						cout << "No" << endl;
						return;
					}
				}
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

