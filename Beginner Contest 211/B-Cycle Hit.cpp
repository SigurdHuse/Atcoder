#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	vector<string> str(4); 
	for(auto &a : str) cin >> a;
	
	vector<string> pos = {"H", "2B", "3B", "HR"};
	vector<bool> seen(4);
	
	for(string s : str){
		for(int i = 0; i < 4; ++i){
			if(s == pos[i]) seen[i] = 1;
		}
	}
	
	cout << (all_of(all(seen),  [](bool i){return i;}) ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

