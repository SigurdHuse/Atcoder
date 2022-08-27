#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	ll s = accumulate(all(v), 0);
	sort(all(v), greater<int>());
	
	
	
	for(int i = 0; i < m; ++i){
		if(4 * m * v[i] < s){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

