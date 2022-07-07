#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if(y1 == y2) y4 = y3;
	else if(y1 == y3) y4 = y2;
	else y4 = y1;
	
	if(x1 == x2) x4 = x3;
	else if(x1 == x3) x4 = x2;
	else x4 = x1;
	cout << x4 << " " << y4 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

