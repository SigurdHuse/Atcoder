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
	ll n, t; cin >> n >> t;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	ll sum = accumulate(all(v), 0ll);
	
	t %= sum;
	for(int i = 0; i < n; ++i){
		if(t - v[i] < 0){
			cout << i + 1 << " ";
			cout << t << endl;
			return;
		}
		t -= v[i];
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

