#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll g_1(ll x){
	string s = to_string(x);
	sort(all(s), greater<char>());
	return stoll(s);
}

ll g_2(ll x){
	string s = to_string(x);
	sort(all(s));
	return stoll(s);
}

ll f(ll x){
	return g_1(x) - g_2(x);
}

void solve(){
	ll n, k; cin >> n >> k;
	while(k--) n = f(n);
	cout << n << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

