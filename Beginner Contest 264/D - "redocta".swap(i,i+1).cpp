#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	map<char,int> val;
	val['a'] = 0;
	val['t'] = 1;
	val['c'] = 2;
	val['o'] = 3;
	val['d'] = 4;
	val['e'] = 5;
	val['r'] = 6;
	
	string s; cin >> s;
	int ans = 0, n = SZ(s);
	
	for(int i = 0; i < n; ++i){
		for(int j = i; j < n -i - 1; ++j){
			if(val[s[j]] < val[s[j+1]]){
				swap(s[j], s[j+1]);
				ans++;
			}
		}
	}
	cout << s << endl;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

