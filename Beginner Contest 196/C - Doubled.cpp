#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We just need to look at the first half

void solve(){
	ll n; cin >> n;
	ll fac = 10;
	
	for(ll i = 1; i <= 1e6; ++i){
		if(i == 10) fac *= 10;
		else if(i == 100) fac *= 10;
		else if(i == 1000) fac *= 10;
		else if(i == 10000) fac *= 10;
		else if(i == 100000) fac *= 10;
		
		if(i*fac + i > n){
			cout << i-1 << endl;
			return;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

