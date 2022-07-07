#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, t; cin >> n;
	int score = -1;
	set<string> mem;
	int ans = 1;
	string s;
	REP(i, n){
		cin >> s >> t;
		if(!mem.count(s)){
			mem.insert(s);
			if(t > score){
				score = t;
				ans = i+1;
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

