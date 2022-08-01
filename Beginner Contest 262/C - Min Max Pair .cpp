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
	ll cur = 0, ans = 0;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	for(int i = 1; i <= n; ++i){
		if(a[i-1] == i){
			ans += cur;
			cur++;
		}
	}
	bool turn = 1;
	for(int i = 1; i <= n; ++i){
		if(a[a[i-1]-1] == i && a[i-1] != i){
			if(turn) ans++;
			turn ^= 1;
		}
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

