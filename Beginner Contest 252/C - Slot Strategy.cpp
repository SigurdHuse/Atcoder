#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	int ans = INT_MAX, t = 0, cnt = 0;
	bool seen[n];
	
	for(int i = 0; i < 10; ++i){
		cnt = 0;
		memset(seen, 0, sizeof(seen));
		t = -1;
		int rounds = -1;
		while(cnt < n){
			t++;
			t %= 10;
			rounds++;
			for(int j = 0; j < n; ++j){
				if(v[j][t] - '0' == i && !seen[j]){
					seen[j] = 1;
					cnt++;
					break;
				}
			}
		}
		ans = min(ans, rounds);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

