#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int x, y, z; cin >> x >> y >> z;
	
	if(x > 0){
		if(y > 0 && x > y){
			if(z > y) cout << -1 << endl;
			else cout << abs(z) + x - z << endl;
		}
		else cout << x << endl;
	}
	else{
		if(y <= 0 && x < y){
			if(z < y) cout << -1 << endl;
			else cout << abs(z) - x + z << endl;
		}
		else cout << abs(x) << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

