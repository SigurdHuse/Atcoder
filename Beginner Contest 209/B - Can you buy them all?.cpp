#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 


void solve(){
	int n, x; cin >> n >> x;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	for(int i = 0; i < n; ++i){
		if(i % 2) v[i]--;
	}
	int s = accumulate(all(v), 0);
	cout << (x >= s ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

