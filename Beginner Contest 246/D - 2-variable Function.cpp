#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 


ll f(ll a, ll b){return a*a*a + a*a*b + a*b*b + b*b*b;}

void solve(){
	ll n; cin >> n;
	ll x = 8e18;
	ll j = 1000000;
	for(ll i = 0; i<= 1000000;++i){
		while(f(i,j) >= n && j >= 0){
			x = min(x, f(i,j));
			j--;
		}
	}
	cout << x<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

