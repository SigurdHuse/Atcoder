#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Want to find y where 100*1.01^y >= x

void solve(){
	ll x; cin >> x;
	ll p = 100, step = 0;
	while(p < x){
		p += p / 100;
		step++;
	}
	cout << step << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

