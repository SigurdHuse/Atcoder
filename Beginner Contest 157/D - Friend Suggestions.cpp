#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<set<int>> fri(n), block(n);
	int a, b; 
	while(m--){
		cin >> a >> b;
		a--;b--;
		fri[a].push_back(b);
		fri[b].push_back(a);
	}
	while(k--){
		cin >> a >> b;
		a--; b--;
		block[a].push_back(b);
		block[b].push_back(a);
	}
	
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

