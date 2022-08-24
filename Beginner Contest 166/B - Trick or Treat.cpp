#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(n+1);
	int d;
	while(k--){
		cin >> d;
		REP(i,d){
			int a; cin >> a;
			v[a]++;
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		ans += v[i] == 0;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

