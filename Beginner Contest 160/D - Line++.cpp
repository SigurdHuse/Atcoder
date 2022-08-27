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
	int x, y; cin >> x >> y;
	vector<int> res(n+1);
	for(int i = 1; i <= n; ++i){
		for(int j = i + 1; j <= n; ++j){
			res[min(abs(x-i) + abs(j - y) + 1, j-i)]++;
		}
	}
	
	for(int i = 1; i < n; ++i) cout << res[i] << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

