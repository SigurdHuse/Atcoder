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
	int n = SZ(s);
	int ans = 1;
	
	for(int i = n-1; i > 0; --i){
		//cout << i << endl;
		if(s[i] != '0') ans++;
		else{
			if(s[i-1] == '0'){
				i--;
			}
			ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

