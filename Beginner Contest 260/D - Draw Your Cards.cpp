#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	
	vector<int> under(n+5,-1);
	vector<int> pile(n+5,0);
	set<int> st;
	vector<int> res(n+5,-1);
	
	for(int i = 1; i <= n; ++i){
		int p; cin >> p;
		
		auto it = st.upper_bound(p);
		if(it == st.end()){
			pile[p] = 1;
			st.insert(p);
		}
		else{
			under[p] = (*it);
			pile[p] = pile[(*it)] + 1;
			st.erase(it);
			st.insert(p);
		}
		
		if(pile[p] == k){
			st.erase(p);
			int x = p;
			for(int j = 0; j <k; ++j){
				res[x] = i;
				x = under[x];
			}
		}
	}
	for(int i = 1; i<=n; ++i) cout << res[i] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

