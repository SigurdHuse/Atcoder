#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int y; cin >> y;
	while(y < 4000){
		if(y % 4 == 2){
			cout << y << endl;
			return;
		}
		y++;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

