#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool is_valid(int h, int m){
	int top = h % 10;
	int bottom = m / 10;
	
	if(h/10 == 2 && bottom > 3) return false;
	
	if(top >= 6) return false;
	
	return true;
}

void solve(){
	int h, m; cin >> h >> m;
	
	while(!is_valid(h,m)){
		m++;
		if(m == 60){
			m = 0;
			h = (h + 1)%24;
		}
	}
	cout << h << " " << m << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

