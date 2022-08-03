#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, w; cin >> a >> b>> w;
	int m = 1e9, M = 0;
	for(int n = 0; n <= 1e6; ++n){
		if(a*n <= 1000*w && 1000*w <= b*n){
			m = min(m,n);
			M = max(M,n);
		}
	}
	
	if(M == 0) cout << "UNSATISFIABLE" << endl;
	else cout << m << " " << M << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

