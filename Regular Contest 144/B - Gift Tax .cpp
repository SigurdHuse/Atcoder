#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, a, b; cin >> n >> a >>b;
	vector<ll> v(n);
	for(auto &A : v) cin >> A;
	ll s = accumulate(all(v), 0);
	int l = 0, r = n-1;
	sort(all(v));
	while(l < r){
		v[l] += a; v[r] -= b;
		if(v[r-1] >= v[r]) r--;
		if(v[l] >= v[l+1]) l++;
	}
	cout << *min_element(all(v)) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

