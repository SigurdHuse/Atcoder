#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool is_pal(string &s){
	int n = SZ(s);
	for(int i = 0; i < n/2; ++i){
		if(s[i] != s[n-i-1]) return 0;
	}
	return 1;
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	if(s[0] == 'A' && s[n-1] == 'B'){
		cout << "No" << endl;
		return;
	}
	if(s[0] == 'B'){
		if(n == 2 && s[1] == 'A') cout << "No" << endl;
		else cout << "Yes" << endl;
		return;
	}
	if(s[0] == 'A' && s[n-1] == 'A'){
		if(n == 4 && s[1] != s[2]) cout << "No" << endl;
		else cout << "Yes" << endl;
		return;
	}
	if(is_pal(s)){
		cout << "Yes" << endl;
		return;
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

