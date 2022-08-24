#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c, d; cin >> a >> b >> c >> d;
	bool turn = 1;
	while(a > 0 && c > 0){
		if(turn) c -= b;
		else a -= d;
		turn ^= 1;
	}
	cout << (a > 0 ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

