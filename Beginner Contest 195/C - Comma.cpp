#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// 	           1,000 - 999,999                 one comma
// 	       1,000,000 - 999,999,999             two comma
//     1,000,000,000 - 999,999,999,999         three comma
// 1,000,000,000,000 - 999,999,999,999,999     four comma
// 1,000,000,000,000 - 999,999,999,999,999,999 five comma

void solve(){
	ll n, ans = 0; cin >> n;
	if(n < 1000){
		cout << 0 << endl;
		return;
	}
	if(n >= 999999)             ans += 1*(999999 - 1e3 + 1);
	else{
		ans += n - 1e3 + 1;
		cout << ans << endl;
		return;
	}
	if(n >= 999999999)          ans += 2*(999999999 - 1e6 + 1);
	else{
		ans += 2*(n - 1e6 + 1);
		cout << ans << endl;
		return;
	}
	if(n >= 999999999999)       ans += 3*(999999999999 - 1e9 + 1);
	else{
		ans += 3*(n - 1e9 + 1);
		cout << ans << endl;
		return;
	}
	if(n >= 999999999999999)    ans += 4*(999999999999999 - 1e12 + 1);
	else{
		ans += 4*(n - 1e12 + 1);
		cout << ans << endl;
		return;
	}
	if(n >= 999999999999999999) ans += 5*(999999999999999999 - 1e15 + 1);
	else{
		ans += 5*(n - 1e15 + 1);
		cout << ans << endl;
		return;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

