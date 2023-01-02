#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, x, ans;
	string s; cin >> n >> s;
	
	vector<pair<int,char>> a;
	ans = 0;
	for(int i = 0; i < n; ++i){
		cin >> x;
		a.push_back({x,s[i]});
		if(s[i] == '1') ans++;
	}
	sort(all(a));
	x = ans;
	for(int i = 0; i< n; ++i){
		if(a[i].s == '1') x--;
		else x++;
		if(i < (n-1)){
			if(a[i].f != a[i+1].f) ans = max(ans, x);
		}
		else ans = max(ans, x);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

