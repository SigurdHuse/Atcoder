#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Very basic sliding window
// Will use map to keep track of candies


void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(n);
	map<int,int> mem;
	for(auto &a : v) cin >> a;
	REP(i,k) mem[v[i]]++;
	int ans = mem.size();
	for(int i = k; i < n; ++i){
		mem[v[i]]++;
		mem[v[i-k]]--;
		if(mem[v[i-k]] == 0) mem.erase(v[i-k]);
		ans = max(SZ(mem), ans);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

