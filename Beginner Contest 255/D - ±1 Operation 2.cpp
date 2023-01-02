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
	int n, q; cin >> n >> q;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	vector<ll> up(n), down(n);
	
	for(int i = 1; i < n; ++i){
		up[i] = up[i-1] + i*(v[i] - v[i-1]);
	}
	for(int i = n-2; i >= 0; --i){
		down[i] = down[i+1] + (n-i-1)*(v[i+1] - v[i]);
	}
	
	//for(int i : v) cout << i << " ";
	//cout << endl;
	//for(auto j : up) cout << j << " ";
	//cout << endl;
	//for(auto j : down) cout << j << " ";
	//cout << endl;
	
	int x;
	
	while(q--){
		cin >> x;
		auto it = lower_bound(all(v), x);
		//cout << "herer" << endl;
		if(it == v.end()){
			ll diff = x - v[n-1];
			cout << up[n-1] + diff*n << endl;
			continue;
		}
		//cout << *it << endl;
		int idx = it - v.begin();
		//cout << idx << endl;
		ll diff = x - v[idx]; 
		ll pos = up[idx] + diff * idx;
		ll neg = down[idx] - diff * (n - idx);
		cout << pos + neg << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

