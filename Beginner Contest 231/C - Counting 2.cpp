#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, q,x; cin >> n >> q;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	REP(i,q){
		cin>> x;
		auto it = lower_bound(all(v),x);
		cout << n- (it - v.begin()) << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

