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
	vector<int> a(m), b(n+1);
	
	for(auto &x : a) cin >> x;
	for(int i = 1; i <= n; ++i) b[i] = i;
	
	// Each time we swap 1 keep track of which value
	// We swap with 
	
	unordered_map<int,int> mem;
	unordered_map<int,int> pos;
	
	for(int k = 0; k < m; ++k){
		if(b[a[k]] == 1){
			mem[k+1] = b[a[k] +1];
		}
		else if(b[a[k]+1] == 1){
			mem[k+1] = b[a[k]];
		}
		swap(b[a[k]], b[a[k] + 1]);
	}
	
	for(int k = 1; k <= n; ++k){
		pos[b[k]] = k;
	}
	
	int ans = pos[1];
	
	for(int i = 1; i <= m; ++i){
		if(mem.count(i)){
			cout << pos[mem[i]]<< endl;
		}
		else cout << ans<< endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

