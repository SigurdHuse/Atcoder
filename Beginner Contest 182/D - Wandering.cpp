#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Need to keep track of furthest go we forward

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	ll cum = 0, cur = 0, mx = 0, far = 0;
	for(int i = 0; i < n; ++i){
		far = max(far, cum);
		mx = max(mx, cur + max(far, 0ll));
		cum += v[i];
		cur += cum;
		mx = max(mx, cur);
	}
	cout << mx << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

