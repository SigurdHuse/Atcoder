#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &h : v) cin >> h;
	
	cout << max_element(all(v)) - v.begin() + 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

