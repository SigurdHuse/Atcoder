#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = s.size();
	if(n == 3) cout << s << s << endl;
	else if(n == 2) cout << s << s << s << endl;
	else{
		REP(i,6) cout << s;
		cout << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

