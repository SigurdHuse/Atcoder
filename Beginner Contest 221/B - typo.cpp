#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s, t ; cin >> s >> t;
	int n = s.size();
	bool different = 0;
	if(s[0] != t[0]){
		if(s[0] == t[1] && s[1] == t[0]) cout << "Yes" << endl;
		else cout << "No" << endl;
		return;
	}
	if(s[n-1] != t[n-1]){
		if(s[n-1] == t[n-2] && s[n-2] == t[n-1]) cout << "Yes" << endl;
		else cout << "No" << endl;
		return;
	}
	for(int i = 1; i <n -1; ++i){
		if(s[i] != t[i]){
			if(different){
				cout << "No" << endl;
				return;
			}
			if(s[i] == t[i+1] && s[i+1] == t[i]){
				different = 1;
				i++;
			}
			else{
				cout << "No" << endl;
				return;
			}
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

