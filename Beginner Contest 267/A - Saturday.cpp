#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	
	if(s[0] == 'M') cout << 5 << endl;
	if(s[0] == 'T' && s[1] == 'u') cout << 4 << endl;
	if(s[0] == 'W') cout << 3 << endl;
	if(s[0] == 'T' && s[1] == 'h') cout << 2 << endl;
	if(s[0] == 'F') cout << 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

