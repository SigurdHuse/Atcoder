#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	constexpr ll inf = numeric_limits<ll>::max() / 2;
	
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(m), b(m), c(m);
	
	vector<ll> dist(n, inf);
	
	dist[0] = 0;
	
	for(int i = 0; i < m; ++i){
		cin >> a[i]>> b[i]>> c[i];
		a[i]--;
		b[i]--;
	}
	while(k--){
		int e;
		cin >> e;
		e -= 1;
		
		if(dist[b[e]] > dist[a[e]] + c[e]){
			dist[b[e]] = dist[a[e]] + c[e];
		}
	}
	
	if(dist[n-1] == inf){
		cout<< -1 << endl;
	}
	else cout << dist[n-1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

