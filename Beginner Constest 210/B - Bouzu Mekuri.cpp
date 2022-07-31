#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (ll)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	for(int i = 0; i < n; ++i){
		if(s[i] == '1'){
			if(i %2) cout << "Aoki" << endl;
			else cout << "Takahashi" << endl;
			return;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

