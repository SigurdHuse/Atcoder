#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	long double a, b, c; cin >> a >> b;
	if(a == 0 || b == 0){
		cout << 0 << endl;
		return;
	}
	c = b * 1000.0;
	ll sum = a*c / 1000.0;
	cout << setprecision(20);
	cout << sum << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

