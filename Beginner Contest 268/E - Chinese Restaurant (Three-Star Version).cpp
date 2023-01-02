#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Min-max problem
// Minimise dish distance for all persons

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int ans = 0;
	
	for(int i = 0; i <n; ++i){
		ans += min((v[i] - i + 3*n) % n, (i - v[i] +3*n) % n);
	}
	
	int l = 0, r = n-1;
	while(l < r){
		int m = (r - l) / 2 + l;
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			cnt += min((v[i] - i -m + 3*n) % n, (i - v[i] + m + 3*n) %n);
			//cout << (v[i] - i -m + n) % n<< endl;
		}
		//cout << cnt << endl;
		if(cnt < ans){
			ans = cnt;
			r = m - 1;
		}
		else l = m + 1;
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

