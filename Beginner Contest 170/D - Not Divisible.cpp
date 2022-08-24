#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Factor all values and keep track of factors

unordered_map<int,int> mem;

const int N = 1e6 + 1;

void solve(){
	int n; cin >> n;
	
	ll a[n];
	REP(i,n) cin >> a[i];
	
	map<ll,int> memo;
	
	REP(i,n) mem[a[i]]++;
	
	bool div[100001];
	memset(div, false, sizeof(div));
	
	for(auto it : mem){
		ll x = it.first;
		for(ll i = x+x; i <= 100000; i += x) div[i] = 1;
		
		if(it.second > 1) div[x] = 1;
	}
	
	int ans = 0;
	for(int i = 0; i < n; ++i){
		ans += !div[a[i]];
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

