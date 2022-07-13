#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// we abuse that friends name are between 1 and n, and the number 
// of friends are n so we can just use name as index

void solve(){
	int n, x; cin >> n >> x;
	x--;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a; a--;
	}
	while(v[x] != -1){
		int cpy = v[x];
		v[x] = -1;
		x = cpy;
	}
	int ans = 0;
	for(int i : v){
		ans += i == -1;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

