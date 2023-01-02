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
	int h = 21, m = 0;
	int k; cin >> k;
	h += k / 60;
	m += k % 60;
	cout << h << ":";
	string min = to_string(m);
	if(SZ(min) == 1) cout << "0";
	cout << m << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

