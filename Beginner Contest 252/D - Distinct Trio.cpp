#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 2*1e5;

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	vector<ll> cnt(N+1);
	for(auto &a : v){
		cin >> a;
		cnt[a]++;
	}
	for(int i = 0; i < N; ++i){
		cnt[i+1] += cnt[i];
	}
	ll ans = 0;
	for(int j = 0; j < n; ++j){
		ans += cnt[v[j] - 1]*(n-cnt[v[j]]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

