#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m, x, t, d; cin >> n >> m >> x >> t >>d;
	if(m >= x) cout << t << endl;
	else{
		cout << t - d*(x - m) << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

