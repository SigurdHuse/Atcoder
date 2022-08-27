#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n;

bool pal(string &s, int start, int stop){
	for(int i = start; i < stop/2; ++i){
		if(s[i] != s[stop - i - 1]) return 0;
	}
	return 1;
}

void solve(){
	string s; cin >> s;
	n = SZ(s);
	if(!pal(s,0,n) || !pal(s,0,n/2) || !pal(s,n/2,n)){
		cout << "No" << endl; 
	}
	else cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

