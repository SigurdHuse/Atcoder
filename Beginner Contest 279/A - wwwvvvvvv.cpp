#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int ans = 0;
	
	for(char c : s){
		if(c== 'v') ans++;
		else ans += 2;
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

