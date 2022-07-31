#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c; cin >> a >> b >> c;
	if(a == b || (-a == b && (c % 2 == 0))){
		cout << "=" << endl;
		return;
	}
	if(a > b){
		if(abs(b) > a && (c % 2 == 0)) cout << "<" << endl;
		else cout << ">" << endl;
	}
	
	else{
		if(abs(a) > b && (c % 2 == 0)) cout << ">" << endl;
		else cout << "<" << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

