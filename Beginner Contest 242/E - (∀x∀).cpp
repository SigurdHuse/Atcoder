#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 998244353;

ll fast_26(ll x){
	ll ans = 1, fac = 26;
	
	while(x > 0){
		if(x & 1){
			ans = (ans * fac) % M;
		}
		fac = (fac * fac) % M;
		x /= 2;
	}
	return ans;
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	ll cres = 0;
	string target = s;
	int p = 0, q = n-1;
	while(p < q){
		target[q] = target[p];
		p++;q--;
	}
	int last = (n-1)/2;
	
	for(int i = 0; i <= last;++i){
		cres *= 26; cres %= M;
		cres += (s[i] - 'A'); cres %= M;
	}
	cres++; cres %= M;
	if(s < target){
		cres += M -1;
		cres %= M;
	}
	cout << cres << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

