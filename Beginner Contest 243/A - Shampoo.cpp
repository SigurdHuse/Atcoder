#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int v, a, b, c; cin >> v >> a >>b >> c;
	while(v >= 0){
		v -= a;
		if(v < 0){
			cout << "F" << endl;
			break;
		}
		v -= b;
		if(v < 0){
			cout << "M" << endl;
			break;
		}
		v -= c;
		if(v < 0){
			cout << "T" << endl;
			break;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

