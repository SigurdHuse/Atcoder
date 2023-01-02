#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Check each column

int A[11][11], B[11][11];

void solve(){
	int h1, w1, h2, w2;
	cin >> h1 >> w1;
	REP(i,h1) REP(j,w1) cin >> A[i][j];
	cin >> h2 >>w2;
	REP(i,h2) REP(j,w2) cin >> B[i][j];
	
	int cur_row = 0;
	int cnt = 0;
		
	vector<bool> removed(11);
	while(cur_row < h1){
		int idx = 0;
		for(int k = 0; k < w1; ++k){
			if(A[cur_row][k] == B[cnt][idx] && !removed[k]){
				idx++;
			}
			else removed[k] = 1;
			if(idx == w2) break;
		}
		if(idx == w2) cnt++;
		if(cnt == h2) break;
		cur_row++;
	}
	cout << (cnt == h2 ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

