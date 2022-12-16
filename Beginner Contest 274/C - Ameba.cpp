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
	vector<int> v(n+1), parent(2*n+2);
	
	for(int i = 1; i <= n; ++i) cin >> v[i];
	
	for(int i = 1; i <= n; ++i){
		parent[2*i] = parent[v[i]] + 1;
		parent[2*i + 1] = parent[v[i]] + 1;
	}
	
	for(int k = 1; k <= 2*n + 1; ++k){
		cout << parent[k] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

