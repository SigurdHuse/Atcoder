#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	map<int,int> mem;
	for(auto i : a) mem[i]++;
	for(int i : b){
		if(mem[i] == 0){
			cout << "No" << endl;
			return;
		}
		mem[i]--;
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

