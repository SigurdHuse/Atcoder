#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int k, n; cin >> k >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	int diff = INT_MIN; 
	sort(all(v));
	for(int i = 0; i < n-1; ++i){
		diff = max(diff, v[i+1]- v[i]);
	}
	diff = max(diff, k - v[n-1] + v[0]);
	cout << k - diff << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

