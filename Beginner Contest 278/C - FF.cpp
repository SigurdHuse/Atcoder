#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, q; cin >> n >> q;
	map<int,set<int>> mem;
	
	int t, a, b;
	
	while(q--){
		cin >> t >> a >> b;
		
		if(t == 1){
			mem[b].insert(a);
		}
		if(t == 2){
			if(mem[b].count(a)){
				mem[b].erase(a);
			}
		}
		if(t == 3){
			if(mem[a].count(b) && mem[b].count(a)){
				cout << "Yes" << endl;
			}
			else cout << "No" << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

