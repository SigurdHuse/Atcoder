#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<bool> cols(7,1);
	string s; cin >> s;
	
	if(s[0] == '1'){
		cout << "No" << endl;
		return;
	}
	if(s[0] == '0' && s[4] == '0') cols[3] = 0;
	if(s[1] == '0' && s[7] == '0') cols[2] = 0;
	if(s[2] == '0' && s[8] == '0') cols[4] = 0;
	if(s[3] == '0') cols[1] = 0;
	if(s[5] == '0') cols[5] = 0;
	if(s[6] == '0') cols[0] = 0;
	if(s[9] == '0') cols[6] = 0;
	int idx = 0;
	for(;idx < 7; ++idx){
		if(cols[idx]) break;
	}
	idx++;
	for(;idx < 7; ++idx){
		if(!cols[idx]) break;
	}
	idx++;
	for(;idx < 7; ++idx){
		if(cols[idx]) break;
	}
	cout << (idx < 7 ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

