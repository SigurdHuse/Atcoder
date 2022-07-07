#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

string seq(int n){
	if(n == 1) return "1";
	string ans;
	if(n >= 10) ans = ";" + to_string(n);
	else ans = to_string(n);
	string tmp = seq(n-1);
	return ans.insert(0,tmp) + tmp;
}

void solve(){
	int n; cin >> n;
	string ans = seq(n);
	for(int i = 0; i< (int)ans.size(); ++i){
		if(ans[i] == ';'){
			cout << ans[i+1] << ans[i+2] << " ";
			i += 2;
		}
		else cout << ans[i] << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

