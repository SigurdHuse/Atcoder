#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int x, y; cin >> x >> y;
	if(y & 1){
		cout << "No" << endl;
		return;
	}
	if(2*x <= y && 4*x >= y){
		cout << "Yes" << endl;
		return;
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

