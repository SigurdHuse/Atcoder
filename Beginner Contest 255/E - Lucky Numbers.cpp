#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to find the starting number that hits the most numbers in x

// Keep track of difference and then find largest sum

ll n, m;
ll s[200005], x[15];
ll b[200005];

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n-1; ++i) cin >> s[i];
	for(int i = 1; i <= m; ++i) cin >> x[i];
	
	for(int i = 2; i <= n; ++i) b[i] = s[i-1] - b[i-1];
	map<ll,ll> mp;
	
	
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			ll c = x[j] - b[i];
			if(i % 2 == 0) c*= -1;
			mp[c]++;
		}
	}
	ll ans = 0;
	for(auto p : mp) ans = max(ans, p.s);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

