#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), ans(n);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i< n; ++i){
		ans[v[i] - 1] = i + 1;
	}
	for(int i : ans) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

