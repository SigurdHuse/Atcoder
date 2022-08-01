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
	reverse(all(s));
	int n = SZ(s);
	for(int i = 0; i < n; ++i){
		if(s[i] == '6') s[i] = '9';
		else if(s[i] == '9') s[i] = '6';
	}
	cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

