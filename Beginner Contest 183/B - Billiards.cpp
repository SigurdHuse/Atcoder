#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Will try binary search

void solve(){
	double sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;
	if(sx == gx){
		cout << sx << endl;
		return;
	}
	
	double l = sx, r = gx;
	double mid;
	for(int _ = 0; _ < 10000; ++_){
		mid = l + (r - l)/2;
		double angle = atan2(sy, abs(sx - mid));
		//cout << mid << " " << angle<< endl;
		double diff = abs(gx - mid);
		double newy = diff*tan(angle);
		if(newy > gy) l = mid;
		else r = mid;
	}
	cout << setprecision(16);
	cout << mid << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

