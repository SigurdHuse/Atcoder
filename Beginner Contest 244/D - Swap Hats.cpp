#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	vector<char> s(3), t(3);
	for(auto &x : s) cin >> x;
	for(auto &x : t) cin >> x;
	int same = 0;
	for(int i = 0; i < 3;++i) same += (s[i] == t[i]);
	if(same == 3 || same == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

