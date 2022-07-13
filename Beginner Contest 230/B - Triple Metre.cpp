#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = s.size();
	if(n == 1){
		cout << "Yes" << endl;
		return;
	}
	if(n == 2){
		if(s[0] == 'o' && s[1] == 'x') cout << "Yes" << endl;
		else if(s[0] == 'x' && s[1] == 'x') cout << "Yes" << endl;
		else if(s[0] == 'x' && s[1] == 'o') cout << "Yes" << endl;
		else cout << "No" << endl;
		return;
	}
	if(s[0] == 'x' && s[1] == 'x' && s[2] == 'x'){
		cout << "No" << endl;
		return;
	}
	int start = 0;
	for(int i = 0; i < 3; ++i){
		if(s[i] == 'o'){
			start = i;
			break;
		}
	}
	
	for(int i = start; i < n; i += 3){
		if(s[i] != 'o'){
			cout << "No" << endl;
			return;
		}
		if(i + 1 < n && s[i+1] !='x'){
			cout << "No" << endl;
			return;
		}
		if(i + 2 < n && s[i+2] != 'x'){
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

