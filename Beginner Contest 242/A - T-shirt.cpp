#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	double a, b, c, x;
	cin >> a >> b >> c >> x;
	cout << setprecision(16);
	if(x <= a){
		cout << 1 << endl;
		return;
	}
	if(x <= b){
		cout << c/(b - a) << endl;
		return;
	}
	cout << 0 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

