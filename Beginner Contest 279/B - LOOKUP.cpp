#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	string s, t; cin >> s >> t;
	
	int n = SZ(s);
	
	for(int i =0; i < n; ++i){
		for(int j = 1; j <= n; ++j){
			string tmp = s.substr(i, j);
			if(tmp == t){
				cout << "Yes" << endl;
				return;
			} 
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

