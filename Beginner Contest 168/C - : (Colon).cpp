#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Need to find angle between
// 360 / 12 = 30 degrees per hour / minute
// 30 / 60 = 0.5 degrees per minute
// 360 / 60 = 6  degrees per minute in a hour

// generalised pythagoras
// a^2 = b^2 + c^2 - 2*b*c*cos(angel)

const long double PI = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213;

void solve(){
	long double a, b; cin >> a >> b;
	long double h, m; cin >> h >> m;
	long double a_angle = 30.0*h + 0.5 * m;
	long double b_angle = 6.0*m;
	
	long double angel = abs(a_angle - b_angle);
	if(angel > 180.0) angel = 360.0 - angel;
	if(angel == 180.0){
		cout << a + b << endl;
		return;
	}
	//cout << angel << endl;
	angel = angel * PI / 180.0;
	long double ans = sqrt(a*a + b*b - 2*a*b*cos(angel));
	cout << setprecision(20);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

