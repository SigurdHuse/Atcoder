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
	vector<int> v(n), ans(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	int uniq = 1;
	for(int i = 0; i < n-1; ++i){
		if(v[i+1] != v[i]) uniq++;
	}
	int cur = v[0], cnt = 1;
	for(int i = 1; i < n; ++i){
		if(v[i] != cur){
			ans[uniq - 1] = cnt;
			uniq--;
			cnt = 1;
		}
		else cnt++;
		cur = v[i];
	}
	ans[uniq-1] = cnt;
	for(int i : ans) cout << i << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

