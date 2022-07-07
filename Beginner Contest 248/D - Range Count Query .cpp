#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, q, tmp, l, r; cin >> n;
	vector<vector<int>> mem(n+1);
	for(int i = 0; i< n; ++i){
		cin >> tmp;
		mem[tmp].emplace_back(i);
	}
	cin >> q;
	for(int i = 0; i< q; ++i){
		cin >> l >> r >>tmp;
		int l1 = 0, sz = (int)mem[tmp].size();
		int r1 = sz -1;
		l--; r--;
		while(l1 < sz && mem[tmp][l1] < l) l1++;
		while(r1 > -1 && mem[tmp][r1] > r) r1--;
		cout << r1 - l1 +1  << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

