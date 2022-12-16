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
	
	for(auto &x : v) cin >> x;
	
	for(int i = k;i < n; ++i){
		cout << v[i] << " ";
	}
	for(int i = 0; i < min(n,k); ++i){
		cout << 0 << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

