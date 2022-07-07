#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, x; cin >> n;
	set<int> s;
	REP(i,n){
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

