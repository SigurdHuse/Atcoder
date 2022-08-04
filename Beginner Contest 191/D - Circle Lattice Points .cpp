#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 


void solve(){
	double x_cur, y, r; cin >> x_cur >> y >> r;
	double top_y = floor(y + r), low_y = floor(y - r);
	int ans = 0, x = 0;
	while(top_y > 0){
		ans += floor(top_y - y);
		x++;
		if(sqrt(pow(top_y - y,2) + x*x) > r) top_y--;
	}
	top_y = floor(y + r); x = 0;
	while(top_y > 0){
		ans += floor(top_y - y);
		x--;
		if(sqrt(pow(y - top_y,2) + x*x) > r) top_y--;
	}
	
	x = 0;
	while(low_y < 0){
		ans += floor(y - low_y);
		x++;
		if(sqrt(pow(low_y - y,2) + x*x) > r) low_y++;
	}
	low_y = floor(y - r); x= 0;
	while(low_y < 0){
		ans += floor(y - low_y);
		x--;
		if(sqrt(pow(y - low_y,2) + x*x) > r) low_y++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

