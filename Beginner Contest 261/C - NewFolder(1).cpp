#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	map<string,int> cnt;
	int n; cin >> n;
	
	string s;
	for(int i = 0; i< n; ++i){
		cin >> s;
		cnt[s] += 1;
		if(cnt[s] == 1) cout << s << endl;
		else{
			cout << s << "(" << to_string(cnt[s] - 1) << ")" << endl;
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

