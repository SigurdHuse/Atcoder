#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	string s;
	if(n == 1){
		s = "0";
		if(m == 0){
			cout << s << endl;
			return;
		}
	}
	else{
		s = "1";
		REP(i,n-1) s += "0";
	}
	int si, ci; 
	vector<int> seen(5,-1);
	while(m--){
		cin >> si >> ci;
		si--;
		if(seen[si] != -1 && ci != seen[si]){
			cout << -1 << endl;
			return;
		}
		seen[si] = ci;
		s[si] = to_string(ci)[0];
	}
	if(n == 1){
		cout << s << endl;
		return;
	}
	cout << (s[0] == '0' ? "-1" : s) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

