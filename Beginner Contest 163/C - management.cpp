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
	vector<int> ans(n), v(n-1);
	for(auto &a : v){
		cin >> a;
		a--;
	}
	for(int i : v) ans[i]++;
	for(int i : ans) cout << i << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

