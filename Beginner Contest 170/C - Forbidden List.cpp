#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int x, n; cin >> x >> n;
	vector<bool> mem(401,1);
	int p; 
	while(n--){
		cin >> p;
		mem[p + 100] = 0;
	} 
	int ans = 100000;
	for(int i = -100; i <= 200; ++i){
		if(abs(i - x) < abs(ans - x) && mem[i + 100]) ans = i;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

