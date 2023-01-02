#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int off = 1e4;

void solve(){
	int n, s; cin >> n >> s;
	vector<int> diff(n);
	int a, b;
	int cur = 0;
	for(int i = 0; i < n; ++i){
		cin >> a >> b;
		diff[i] = b - a;
		cur += a;
	}
	int desired = s - cur;
	vector<vector<pair<bool,int>>> dp(n+1, vector<pair<bool,int>>(2*off));
	
	dp[0][off].f = 1;
	dp[0][off].s = -1;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 2*off; ++j){
			if(dp[i][j].f){
				dp[i+1][j].f = 1;
				dp[i+1][j].s = -1;
				dp[i+1][j + diff[i]].f = 1;
				dp[i+1][j + diff[i]].s = i;
			}
		}
	}
	if(!dp[n][off + desired].f){
		cout << "No" << endl;
		return;
	}
	vector<int> idx;
	int cur_pos = off + desired;
	
	for(int i = n; i >= 0; --i){
		if(dp[i][cur_pos].s != -1){
			idx.push_back(dp[i][cur_pos].s);
			cur_pos -= diff[dp[i][cur_pos].s];
		}
	}
	string ans(n, 'H');
	for(int i : idx) ans[i] = 'T';
	cout << "Yes" << endl;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

