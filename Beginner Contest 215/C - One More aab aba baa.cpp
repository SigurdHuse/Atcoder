#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

set<string> perm;

void permute(string s, string answer = ""){
	if(s.length() == 0){
		perm.insert(answer);
		return;
	}
	for(int i = 0; i< (int)s.length(); ++i){
		char ch = s[i];
		string l = s.substr(0, i);
		string r = s.substr(i+1);
		string rest = l + r;
		permute(rest, answer + ch);
	}
	
}

void solve(){
	string s; cin >> s;
	int k;
	cin >> k;
	permute(s);
	vector<string> v(all(perm));
	sort(all(v));
	cout << v[k-1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

