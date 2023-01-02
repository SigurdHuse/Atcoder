#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct Snuke{
	int t, x, a;
};

const int N = 1e5 + 5;

ll dp[5][N + 10];

void solve(){
	int n; cin >> n;
	REP(i,5) REP(j,N) dp[i][j] = -1;
	//cout << "DONe" << endl;
	int idx = 0;
	vector<Snuke> v(n);
	REP(i,n) cin >> v[i].t >> v[i].x >> v[i].a;
	
	dp[0][0] = 0;
	if(v[idx].t == 0){
		if(v[idx].x == 0) dp[0][0] = v[idx].a;
		idx++;
	}
	
	for(int i = 1; i <= N; ++i){
		if(idx == n) break;
		for(int j = 0; j < 5;++j){
			if(dp[j][i-1] != -1){
				dp[j][i] = max(dp[j][i], dp[j][i-1]);
				if(j != 0) dp[j-1][i] = max(dp[j-1][i], dp[j][i-1]);
				if(j != 4) dp[j+1][i] = max(dp[j+1][i], dp[j][i-1]);
			}
		}
		
		
		if(v[idx].t == i){
			if(dp[v[idx].x][i] != -1){
				dp[v[idx].x][i] += v[idx].a;
			}
			idx++;
		}
	}
	//cout << "DONe" << endl;
	int mx = v[n-1].t;
	ll ans = 0;
	for(int i = 0; i < 5; ++i){
		ans = max(ans, dp[i][mx]);
	}
	/*
	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < N; ++j){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	*/
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

