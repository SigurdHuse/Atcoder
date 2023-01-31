#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find cycle

void solve(){
	int n; cin >> n;
	ll k; cin >> k;
	vector<int> v(n), cycle;
	vector<int> next(n, -1);
	for(auto &a : v) cin >> a;
	ll x = 0;
	ll to_cycle = 0;
	
	ll before = 0;
	//ll last = -1;
	
	while(next[x] == -1){
		before += v[x];
		//last = v[x];
		next[x] = v[x];
		x = (x + v[x]) % n;
		to_cycle++;
	}
	// Start of cycle is x
	ll start = x;
	//cycle.push_back(next[x]);
	
	do{
		cycle.push_back(next[x]);
		x = (x + next[x]) % n;
	}while(x != start);
	
	
	to_cycle -= SZ(cycle);
	ll s_cycle = accumulate(all(cycle), 0ll);
	before -= s_cycle;
	
	ll ans = 0;
	
	if(to_cycle >= k){
		while(k--){
			ans += v[ans % n];
		}
		cout << ans << endl;
		return;
	}
	
	//cout << to_cycle << endl;
	k -= to_cycle;
	ans += before;
	
	ans += k / SZ(cycle) * s_cycle;;
	k %= (ll)cycle.size();
	for(int i = 0; i < k; ++i){
		ans += cycle[i];
	}
	
	/*
	for(int i : next) cout << i << " ";
	cout << endl;
	for(int i : cycle) cout << i << " ";
	cout << endl;
	*/
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

