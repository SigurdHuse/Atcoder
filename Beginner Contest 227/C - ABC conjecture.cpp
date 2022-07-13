#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n, ans = 0, prod; cin >> n;
	for(ll c = n; c > 0; --c){
		for(ll b = 1; b <= c; ++b){
			if(c*b > n) break;
			for(ll a = 1; a <= b; ++a){
				prod = a*b*c;
				//cout << prod << endl;
				if(prod <= n) ans++;
				else break;
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

