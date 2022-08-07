#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	set<string> mem1, mem2;
	for(auto &a : v) cin >> a;
	
	for(string s : v){
		if(s[0] == '!'){
			string tmp = s.substr(1);
			if(mem1.count(tmp)){
				cout << tmp << endl;
				return;
			}
			mem2.insert(tmp);
		}
		else{
			if(mem2.count(s)){
				cout << s << endl;
				return;
			}
			mem1.insert(s);
		}
	}
	cout << "satisfiable" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

