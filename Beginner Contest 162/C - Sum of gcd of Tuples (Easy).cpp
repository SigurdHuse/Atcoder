#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Brute force

void solve(){
	int k; cin >> k;
	ll ans = 0;
	for(int a = 1; a <= k; ++a){
		for(int b = 1; b <= k; ++b){
			for(int c = 1; c <= k; ++c){
				int tmp = __gcd(a,b);
				tmp = __gcd(tmp, c);
				ans += tmp;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

