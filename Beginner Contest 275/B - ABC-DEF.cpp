#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const ll M = 998244353;

void solve(){
	vector<ll> v(6);
	
	for(auto &a : v){
		cin >> a;
		a %= M;
	}
	ll ans = v[0] * v[1] % M;
	ans = (ans * v[2]) % M;
	
	ll sub = (v[3] * v[4]) % M;
	sub = (sub * v[5]) % M;
	
	cout << (ans - sub + M) % M << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

