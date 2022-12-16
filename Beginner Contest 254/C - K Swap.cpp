#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i < n - k; ++i){
		if(v[i] > v[i+k]) swap(v[i], v[i+k]);
	}
	cout << (is_sorted(all(v)) ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

