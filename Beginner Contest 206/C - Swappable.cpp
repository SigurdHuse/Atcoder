#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Use map to keep track of occurences and the rest is basic math

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	unordered_map<int,int> mem;
	for(auto a : v)mem[a]++;
	ll ans = 0;
	
	for(int i = 0; i < n; ++i){
		ans += (n - i - mem[v[i]]);
		mem[v[i]]--;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

