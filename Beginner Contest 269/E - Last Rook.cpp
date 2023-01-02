#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void ask(int a, int b, int c, int d){
	cout << "? " << a << " " << b << " " << c << " " << d << endl;
}

void solve(){
	int n; cin >> n;
	int a = 1, b = n, c = 1, d = n;
	int res;
	
	while(a < b){
		int m = (b - a) / 2 + a;
		ask(a,m,1,n);
		fflush(stdout);
		cin >> res;
		if(res == m - a +1){
			a = m+1;
		}
		else b = m;
	}
	while(c < d){
		int m = (d- c) / 2 + c;
		ask(1,n,c,m);
		fflush(stdout);
		cin >> res;
		if(res == m - c +1){
			c = m+1;
		}
		else d = m;
	}
	cout << "! " << a << " " << c << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

