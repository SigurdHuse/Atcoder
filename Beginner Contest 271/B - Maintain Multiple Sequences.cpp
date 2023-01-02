#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n,q; cin >> n >> q;
	int l; 
	vector<vector<int>> v(n);
	
	for(int i = 0; i < n; ++i){
		cin >> l;
		vector<int> tmp(l);
		for(auto &a : tmp) cin >> a;
		v[i] = tmp;
	}
	
	int s, t;
	while(q--){
		cin >> s >> t;
		cout << v[s-1][t-1] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

