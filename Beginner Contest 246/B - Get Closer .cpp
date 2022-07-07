#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define PI 3.14159265  
using ll = long long;
using namespace std; 

void solve(){
	double a, b, x = 1, y = 1;
	cin >> a >>b;
	double deg = atan2(a,b);
	cout << setprecision(16) << x*sin(deg) << " " << y*cos(deg) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

