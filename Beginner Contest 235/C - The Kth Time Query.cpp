#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 


void solve(){
	int n,q, x, k; cin >> n >> q;
	map<int, vector<int>> mem;
	for(int i = 1; i <= n; ++i){
		cin >> x;
		mem[x].push_back(i);
	}
	/*
	for(auto p : mem){
		cout << p.first << endl;
		for(auto j : p.second) cout << j << " ";
		cout << endl;
	}
	*/
	
	REP(i,q){
		cin >> x >> k;
		if((int)mem[x].size() < k){
			cout << -1 << endl;
			continue;
		}
		cout << mem[x][k-1] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

