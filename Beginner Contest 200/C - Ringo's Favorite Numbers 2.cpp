#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We want to find pairs a_i and a_j such that 
// a_i - a_j is a multiple of 200. In other words (a_i - a_j)%200 = 0
// This is the same as a_i % 200 - a_j % 200. If we precompute modulo
// then this becomes a counting problem of many equal elements there are

void solve(){
	int n; cin >> n;
	unordered_map<int,int> mem;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		a %= 200;
		mem[a]++;
	}
	ll ans = 0;
	for(int a : v){
		mem[a]--;
		ans += mem[a];
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

