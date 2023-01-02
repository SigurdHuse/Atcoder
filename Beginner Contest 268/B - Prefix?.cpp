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
	int n1 = SZ(s), n2 = SZ(t);
	if(n1 > n2){
		cout << "No" << endl;
		return;
	}
	for(int i = 0; i < n1; ++i){
		if(s[i] != t[i]){
			cout << "No" << endl;
			return;
		}
	}
	cout<< "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

