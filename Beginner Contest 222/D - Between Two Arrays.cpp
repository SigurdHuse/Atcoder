#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const ll M = 998244353;

void solve(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(auto &A : a) cin >> A;
	for(auto &B : b) cin >> B;
	ll ans = 1;
	for(int i = 1; i < n; ++i){
		ans *= max(1,min(a[i] - a[i-1]+1, b[i] - b[i-1]));
		ans %= M;
	} 
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

