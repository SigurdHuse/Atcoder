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
	string s; cin >> s;
	int n = SZ(s);
	
	if(n != 8){
		cout << "No" << endl;
		return;
	}
	bool one = !isupper(s[0]);
	bool two = !isupper(s[7]);
	bool three = 0;
	
	if(s[1] == '0') three = 1;
	
	for(int i = 1; i < 7; ++i){
		if(!isdigit(s[i])) three = 1;
	}
	
	if(one || two || three){
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

