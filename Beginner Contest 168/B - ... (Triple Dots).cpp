#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int k; cin >> k;
	string s; cin >> s;
	int n = SZ(s);
	if(n <= k){
		cout << s << endl;
		return;
	}
	string ans = s.substr(0,k);
	REP(i,3) ans += ".";
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

