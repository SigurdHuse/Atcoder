#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll x, k; cin >> x >> k;
	ll ans = x;
	
	for(int i = 1; i <= k; ++i){
		//cout << ans<< endl;
		x = ans;
		x /= pow(10, i -1);
		int cur = x % 10;
		if(cur >= 5){
			ans += pow(10, i);
		}
		ans -= cur * pow(10, i-1);
		//ans += cur;
		
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

