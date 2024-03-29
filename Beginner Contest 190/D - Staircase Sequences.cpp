#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Find all the ways to sum up to n and double it

void solve(){
	ll n; cin >> n;
	while(n % 2 == 0) n /= 2;
	ll sq = sqrt(n), ans = 0;
	for(ll i = 1; i <= sq; ++i) if(n % i == 0) ans += 2;
	if(sq*sq == n) ans--;
	
	cout << 2*ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

