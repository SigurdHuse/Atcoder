#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Find segments

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	
	for(auto &p : v) cin >> p;
	
	
	vector<int> cnt(n);
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 3; ++j){
			cnt[(v[i] - 1 - i + j +n)%n]++;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) ans = max(ans,cnt[i]);
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

