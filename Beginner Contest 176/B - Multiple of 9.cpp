#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	string n; cin >> n;
	ll s = 0;
	for(char c : n) s += c - '0';
	cout << (s % 9 == 0 ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

