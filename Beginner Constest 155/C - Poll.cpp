#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	set<string> ans;
	for(auto &s : v) cin >> s;
	map<string,int> mem;
	int mx = 0;
	for(auto s : v){
		mem[s]++;
		mx = max(mem[s], mx);
	}
	for(auto s : v){
		if(mem[s] == mx) ans.insert(s);
	}
	for(auto s: ans) cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

