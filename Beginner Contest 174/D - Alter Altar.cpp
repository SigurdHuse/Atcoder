#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Find number of red stones x
// If white stone is is less than x swap it
// If a red stone is greater than x 


void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for(char c : s) cnt += (c == 'R');
	int ans = 0;
	for(int i = 0; i < cnt; ++i){
		if(s[i] == 'W') ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

