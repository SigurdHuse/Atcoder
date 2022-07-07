#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	sort(all(s));
	for(int i = 0; i< 9; ++i){
		if((s[i] - '0') != i){
			cout << i << endl;
			return;
		}
	}
	cout << 9 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

