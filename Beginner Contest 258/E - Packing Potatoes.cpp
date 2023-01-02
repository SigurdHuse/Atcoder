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
	int n,q; cin >> n >> q;
	ll x; cin >> x;
	
	vector<int> w(2 * n);
	for(int i = 0; i < n; ++i){
		cin >> w[i];
		w[i+n] = w[i];
	}
	
	const ll all = accumulate(w.begin(),w.begin()+n,0ll);
	vector<int> count(n, (x/all) * n);
	x %= all;
	
	for(int i = 0, j = 0, s = 0; i <n; ++i){
		if(j < i){
			j = i;
			s = 0;
		}
		while(s < x){
			s += w[j];
			j += 1;
		}
		
		count[i] += j - i;
		s -= w[i];
	}
	vector<int> order(n,-1), path;
	int loop = -1;
	for(int u = 0, k = 0;;++k){
		if(order[u] != -1){
			loop = k - order[u];
			break;
		}
		order[u] = k;
		path.push_back(u);
		u = (u + count[u]) % n;
	}
	const int non_loop = SZ(path) - loop;
	while(q--){
		ll k; cin >> k;
		k--;
		if(k < non_loop) cout << count[path[k]] << endl;
		else{
			k = (k - non_loop) % loop;
			cout << count[path[non_loop + k]] << endl;
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

