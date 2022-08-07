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
	vector<int> a(n), b(n);
	for(auto &l : a) cin >> l;
	for(auto &l : b) cin >> l;
	ll s = 0;
	for(int i = 0; i< n; ++i){
		s += a[i]*b[i];
	} 
	cout << (s == 0 ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

