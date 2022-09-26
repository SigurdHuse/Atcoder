#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, a, b; cin >> n >> a >> b;
	bool turn = n & 1;
	string white(b, '.'), black(b, '#');
	if(n == 1){
		REP(j,a) cout << white << endl;
		return;
	}
	for(int _ = 0; _ < n; ++_){
		if(!(n & 1)) turn ^= 1;
		REP(j,a){
			turn = !(_ & 1);
			REP(i,n){
				if(turn) cout << white;
				else cout << black;
				turn ^= 1;
			}
			cout << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

