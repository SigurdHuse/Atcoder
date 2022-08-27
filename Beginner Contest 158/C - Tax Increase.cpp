#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 


void solve(){
	double a, b; cin >> a >> b;
	for(double i = 0; i <= 1e5; ++i){
		if(floor(i * 0.08) == a && floor(i * 0.1) == b){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

