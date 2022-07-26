#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// M is always even
// optimal to choose 4, as 4*2 = 8

void solve(){
	int n; cin >> n;
	int fours = n/4, rest = n%4;
	string ans = "";
	int m = fours*8 + rest*2;
	while(fours--){
		ans += "4";
	}
	if(rest != 0) ans += to_string(rest);
	reverse(all(ans));
	cout << m << endl << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

