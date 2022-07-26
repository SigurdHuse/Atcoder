#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = s.size();
	vector<string> v;
	for(int i = 0; i < n+1; ++i){
		v.push_back(s);
		s.push_back(s[0]);
		s.erase(0,1);
	}
	sort(all(v));
	//for(string s1 : v) cout << s1 <<endl;
	cout << v[0] << endl;
	cout << v.back() << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

