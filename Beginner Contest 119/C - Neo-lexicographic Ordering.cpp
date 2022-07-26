#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string x; cin >> x;
	int n; cin >> n;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	
	vector<char> forward(26), backward(26);
	
	for(int i = 0; i < 26; ++i) forward[x[i]-'a'] = i+ 'a';
	for(int i = 0; i < 26; ++i) backward[i] = x[i];
	
	for(int i = 0; i < n; ++i){
		int len = v[i].size();
		for(int j = 0; j < len; ++j) v[i][j] = forward[v[i][j] - 'a'];
	}
	
	sort(all(v));
	for(int i = 0; i < n; ++i){
		int len = v[i].size();
		for(int j = 0; j < len; ++j) v[i][j] = backward[v[i][j] - 'a'];
	}
	for(string s : v) cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

