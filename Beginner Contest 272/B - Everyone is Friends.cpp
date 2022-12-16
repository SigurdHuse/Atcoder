#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<set<int>> seen(n+1);
	
	int k;
	while(m--){
		cin >> k;
		vector<int> pep(k);
		for(auto &a : pep) cin >> a;
		for(int i = 0; i < k; ++i){
			for(int j = 0; j < k; ++j){
				seen[pep[i]].insert(pep[j]);
			}
		}
		
	}
	for(int i = 1; i <= n; ++i){
		if(SZ(seen[i]) < n){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

