#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	unordered_set<int> changed;
	
	for(auto &a : v) cin>> a;
	int q; cin >> q;
	
	int t, i, x;
	
	int cur;
	
	bool change = 1;
	
	while(q--){
		cin >> t;
		if(t == 1){
			cin >> x;
			change = 0;
			changed.clear();
			cur = x;
		}
		else if(t == 2){
			cin >> i >> x;
			if(change || changed.count(i)) v[i-1] += x;
			else v[i-1] = cur + x;
			changed.insert(i);
		}
		else{
			cin >> i;
			if(change || changed.count(i)){
				cout << v[i-1] << endl;
			}
			else cout << cur << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

