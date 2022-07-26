#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

vector<string> perm;

void permute(string s, string answer = ""){
	if(s.length() == 0){
		perm.push_back(answer);
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
	ll n; cin >> n;
	string s = to_string(n);
	permute(s);
	ll ans = 0, len = s.size();
	
	for(string num : perm){
		for(int i = 1; i < len; ++i){
			ll one = stoi(num.substr(0,i));
			ll two = stoi(num.substr(i));
			//cout << one << " " << two << endl;
			ans = max(ans, one*two);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

