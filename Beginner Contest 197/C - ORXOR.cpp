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
	vector<int> a(n);
	for(auto &i : a) cin >> i;
	
	int res = 2000000000;
	for(int i = 0; i < i <<(n-1); ++i){
		int xored = 0;
		int ored = 0;
		for(int j = 0; j <= n; ++j){
			if(j < n) ored |= a[j];
			if(j == n || (i >> j & 1)) xored ^= ored, ored = 0;
		}
		res = min(res,xored);
	}
	
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

