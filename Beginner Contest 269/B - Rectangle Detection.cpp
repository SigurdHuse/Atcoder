#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<string> v(10);
	for(auto &a : v) cin >> a;
	
	int a = -1, b = -1, c = -1, d = -1;
	
	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			if(v[i][j] == '#'){
				if(a == -1){
					a = i;
					b = i;
				}
				else{
					b = i;
				}
				
				if(c == -1){
					c = j;
					d = j;
				}
				else d = j;
			}
		}
	}
	cout << a +1 << " " << b +1 << endl;
	cout << c + 1 << " " << d +1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

