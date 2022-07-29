#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// use a set to keep track of cuts and
// lower bound binary search to find closest cut
// map keeps track of last cut beforehand


void solve(){
	int l, q, c, x; cin >> l >> q;
	map<int, int> mem;
	set<int> cuts;
	cuts.insert(0);
	mem[0] = l;
	
	REP(i,q){
		cin >> c >> x;
		if(c == 1){
			int last_cut = *(--cuts.lower_bound(x));
			int last_val = mem[last_cut];
			mem[last_cut] = x;
			mem[x] = last_val;
			cuts.insert(x);
		}
		else{
			int last_cut = *(--cuts.lower_bound(x));
			cout << mem[last_cut] - last_cut << endl;
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

