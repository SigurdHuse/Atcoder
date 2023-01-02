#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int a, b; cin >> a  >> b;
	vector<bool> mem(3);
	
	if(a == 1 || b == 1) mem[0] = 1;
	if(a == 2 || b == 2) mem[1] = 1;
	if(a == 3 || b == 3){
		mem[0] = 1;
		mem[1] = 1;
	}
	if(a == 4|| b == 4){
		mem[2] = 1;
	}
	if(a == 5 || b == 5){
		mem[2] = 1;
		mem[0] = 1;
	}
	if(a == 6 || b == 6){
		mem[2] = 1;
		mem[1] = 1;
	}
	if(a == 7 || b == 7){
		mem[0] = 1;
		mem[1] = 1;
		mem[2] = 1;
	}
	cout << mem[0] + 2*mem[1] + 4*mem[2] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

