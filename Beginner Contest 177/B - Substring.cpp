#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// sliding window

void solve(){
	string s, t; cin >> s >> t;
	int cnt = 0, ans = INT_MAX, nt = SZ(t), ns = SZ(s);
	for(int start = 0; start < ns - nt + 1; ++start){
		cnt = 0;
		for(int j = 0; j < nt; ++j){
			cnt += (s[start + j] != t[j]);
		}
		ans = min(ans, cnt);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

