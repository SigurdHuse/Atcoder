#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	map<int,int> mem;
	int x;
	for(int i = 0; i < 5; ++i){
		cin >> x;
		mem[x]++;
	}
	if(SZ(mem) != 2){
		cout << "No" << endl;
		return;
	}
	for(auto p : mem){
		if(p.s == 3){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

