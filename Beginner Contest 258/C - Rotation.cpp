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
	int n, q; cin >> n >> q;
	string s; cin >> s;
	int del = 0;
	
	int x, t;
	while(q--){
		cin >> t >> x;
		if(t == 1){
			del = (del + x) % n;
		}
		else{
			cout << s[(x + n - del - 1)%n] << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

