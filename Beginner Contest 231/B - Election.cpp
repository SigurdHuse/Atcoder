#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	map<string,int> mem;
	for(auto s : v) mem[s]++;
	int mx = 0;
	string ans; 
	for(auto s: v){
		if(mem[s] > mx){
			ans = s;
			mx = mem[s];
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

