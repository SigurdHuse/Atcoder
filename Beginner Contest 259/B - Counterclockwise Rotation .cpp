#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

double PI = 2*acos(0.0);

void solve(){
	double x, y, d; cin >> x >> y >> d;
	d *= PI/180;
	cout << setprecision(32);
	if(x == 0 && y == 0){
		cout << x <<" "<< y << endl;
		return;
	}
	double angle = atan2(y,x);
	double dist = sqrt(x*x + y*y);
	angle += d;
	double new_x = cos(angle)*dist;
	double new_y = sin(angle)*dist;
	cout << new_x <<" " << new_y << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

