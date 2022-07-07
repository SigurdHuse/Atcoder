#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c, d; cin >> a >>b >> c >>d;
	if(c < a) cout << "Aoki" << endl;
	else if(c == a && d < b)cout << "Aoki" << endl;
	else cout << "Takahashi" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

