#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	vector<int> v(26);
	for(auto &a : v) cin >> a;
	
	string ans = "";
	
	for(int i : v){
		ans += i + 'a' - 1;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

