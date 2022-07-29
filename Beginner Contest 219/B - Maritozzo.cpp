#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s1, s2, s3, t; cin >> s1 >> s2 >> s3 >>t;
	string ans = "";
	for(char c : t){
		if(c == '1') ans += s1;
		else if(c == '2') ans += s2;
		else ans += s3;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

