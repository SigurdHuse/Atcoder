#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// need to find last a from behind and then check
// if the remaining string is a palindrome

bool is_pal(string s){
	int n = s.size();
	for(int i = 0; i < n/2; ++i){
		if(s[i] != s[n - i - 1]) return false;
	}
	return true;
}

void solve(){
	string s; cin >> s;
	int n = s.size(), last_a = 0, first_a = 0;
	for(int i = n-1; i > -1; --i){
		if(s[i] != 'a'){
			last_a = n - i - 1;
			break;
		}
	}
	for(int i = 0; i< n; ++i){
		if(s[i] != 'a'){
			first_a = i;
			break;
		}
	}
	if(first_a > last_a){cout << "No" << endl;return;}
	
	if(is_pal(s.substr(first_a, n - last_a - first_a))){
		cout << "Yes" << endl;
		return;
	}
	else cout << "No" << endl;
	//cout << s.substr(first_a, n - last_a - first_a) << endl;
	//cout << first_a << " " << last_a << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

