#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	map<string,bool> mem;
	mem["ABC"] = 1; mem["ARC"] = 1;
	mem["AGC"] = 1; mem["AHC"] = 1;
	
	string s1, s2, s3; cin >> s1 >> s2 >>s3;
	
	mem[s1] = 0; mem[s2] = 0; mem[s3] = 0;
	
	for(auto p : mem){
		if(p.second) cout << p.first << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

