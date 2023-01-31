#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	string S; cin >> S;
	int q; cin >> q;
	
	auto g = [&](char s, ll add){
		return char('A' + (s - 'A' + add)%3);
	};
	
	std::function<char(ll,ll)> f= [&](ll t, ll k){
		if(t == 0) return S[k];
		if(k == 0) return g(S[0], t);
		return g(f(t-1,k/2), k%2 + 1);
	};
	
	while(q--){
		ll t,k; cin >> t >> k;
		cout << f(t,k-1) << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

