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
	int q; cin >> q;
	int t, f;
	string c;
	int cnt = 0;
	while(q--){
		cin >> t;
		if(t == 1) cnt++;
		else{
			cin >> f >> c;
			if(f == 1){
				if(!(cnt & 1)) s.insert(0, c);
				else        s += c;
			}
			else{
				if(!(cnt & 1)) s += c;
				else s.insert(0,c);
			}
		}
	}
	if(cnt & 1) reverse(all(s));
	cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

