#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	long double r; cin >> r;
	long double x, y; cin >> x >>y;
	long double dist = sqrt(x*x + y*y);
	if(dist == r) cout << 1 << endl;
	else if(dist <= r + r) cout << 2 <<endl;
	else cout << ceil(dist/r) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

