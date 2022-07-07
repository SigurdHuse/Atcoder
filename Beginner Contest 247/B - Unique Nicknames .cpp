#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s, t;
	map<string, int> mem;
	vector<pair<string,string>> v(n);
	REP(i,n){
		cin >> s >> t;
		mem[s]++;
		mem[t]++;
		v[i] = {s,t};
	}
	for(auto p : v){
		if(p.first != p.second){
			if(mem[p.first] > 1 && mem[p.second] > 1){
				cout << "No" << endl;
				return;
			}
		}
		else{
			if(mem[p.first] > 2 && mem[p.second] > 2){
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

