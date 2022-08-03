#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// height is difference in y

// a = h * tan(pi / N)

const long double PI = 3.1415926535897932384626433;

void solve(){
	long double n, x0, y0, xn, yn;
	cin >> n >> x0 >> y0 >> xn >> yn;
	long double r_c = sqrt(pow(yn - y0,2) + pow(xn-x0, 2))/2;
	long double a = r_c * 2*sin(PI/n);
	long double theta = PI/n;
	long double new_y = y0 + sin(theta)*a;
	long double new_x = x0 + cos(theta)*a;
	
	cout << setprecision(16);
	cout << new_x << " " << new_y << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

