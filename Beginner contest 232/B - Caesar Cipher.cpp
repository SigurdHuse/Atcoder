 #include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s, t; cin >> s >> t;
	int off = (t[0] - s[0] + 26)%26;
	map<char,char> dic;
	for(int i =0; i < 26; ++i){
		dic[i+'a'] = 'a' + (i+off)%26;
	}
	int n = s.size();
	for(int i = 0; i < n; ++i){
		if(dic[s[i]] != t[i]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

