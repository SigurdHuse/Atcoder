#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	vector<bool> mem(128);
	bool up = 0, low = 0;
	for(char c : s){
		if(isupper(c)) up = 1;
		else low = 1;
		if(mem[c]){
			cout << "No" << endl;
			return;
		}
		mem[c] = 1;
	} 
	cout << ((low && up) ? "Yes" : "No") <<endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

