#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, ans = 0; cin >> n;
	for(ll a = n; a > 0;--a){
		for(ll b = 1; b <= n; ++b){
			if(a*b < n) ans++;
			else break;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

