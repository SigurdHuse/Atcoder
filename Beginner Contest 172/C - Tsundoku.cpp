#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<int> av(n), b(m);
	vector<ll> atot(n+1), btot(m+1);
	for(auto &A : av) cin >> A;
	for(auto &A : b) cin >> A;
	REP(i,n) atot[i+1] = atot[i] + av[i];
	REP(i,m) btot[i+1] = btot[i] + b[i];
	
	int ans = 0;
	int ok = m;
	for(int a = 0; a < n+1; ++a){
		while(0 <= ok && k < atot[a] + btot[ok]) ok--;
		if(0 <= ok) ans = max(ans, a + ok);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

