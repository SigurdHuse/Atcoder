#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	map<int,vector<char>> mem;
	set<char> seen;
	
	int n = SZ(s), cur;
	vector<int> closed;
	for(int i = 0; i < n; ++i){
		//cout << SZ(closed) << endl;
		if(s[i] == '('){
			cur = i;
			closed.push_back(i);
		}
		else if(s[i] == ')'){
			if(SZ(mem[cur])){
				for(char c : mem[cur]){
					//cout << c << endl;
					seen.erase(c);
				}
			}
			closed.pop_back();
			if(SZ(closed)) cur = closed.back();
		}
		else{
			if(seen.count(s[i])){
				cout << "No" << endl;
				return;
			}
			seen.insert(s[i]);
			mem[cur].push_back(s[i]);
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

