#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int A[2][2];

void solve(){
	int r, c; cin >> r >> c;
	cin >> A[0][0]>> A[0][1] >> A[1][0] >> A[1][1];
	
	cout << A[r-1][c-1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

