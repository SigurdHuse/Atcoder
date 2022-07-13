#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// we loop through all arrays and check if we have seen them before

void solve(){
	set<vector<int>> s;
	int n,l; cin >> n;
	int ans = n;
	REP(i,n){
		cin >> l;
		vector<int> v(l);
		for(auto &a : v) cin >> a;
		if(s.count(v)) ans--;
		else s.insert(v);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

