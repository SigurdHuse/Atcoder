#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct shop{
	int a,p,x;
};

void solve(){
	int n; cin >> n;
	vector<shop> v(n);
	for(auto &[a,p,x] : v) cin >> a >> p >> x;
	
	int ans = INT_MAX;
	for(int i = 0; i < n; ++i){
		if(v[i].x > v[i].a) ans = min(ans, v[i].p);
	}
	cout << (ans == INT_MAX ? -1 : ans) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

