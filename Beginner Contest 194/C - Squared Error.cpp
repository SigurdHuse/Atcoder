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
	vector<int> mem(401);
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		mem[a + 200]++;
	}
	ll ans = 0;
	for(int i = 0; i < 401; ++i){
		if(mem[i] > 0){
			for(int j = i + 1; j < 401; ++j){
				if(mem[j] > 0){
					ans += pow(i- j, 2)*mem[j]*mem[i];
				}
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

