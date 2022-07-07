#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

string ans = "No";
int n;
bool ok = 1;
/*
void rec(int jump, vector<pair<int,int>> &vals, int goal){
	//cout << goal << " " << jump << " "<<vals[jump].first <<  endl;
	if(goal == 0 && jump == n){
		ans = "Yes";
		ok = 0;
		return;
	}
	if(goal < n-jump || jump >= n || !ok) return;
	
	rec(jump + 1, vals, goal - vals[jump].first);
	rec(jump + 1, vals, goal - vals[jump].second);
}
*/
void solve(){
	int x; cin >> n >> x;
	vector<pair<int,int>> v(n);
	REP(i,n) cin >>v[i].first >> v[i].second;
	vector<vector<bool>> dp(n+1, vector<bool>(x+1));
	dp[0][0] = 1;
	dp[0][x] = 1;
	
	for(int k = 0; k < n; ++k){
		for(int j = 0; j < x; ++j){
			if(dp[k][j]){
				if(j + v[k].first <= x){
					dp[k+1][j + v[k].first] = 1;
				}
				if(j + v[k].second <= x){
					dp[k+1][j + v[k].second] = 1;
				}
			}
		}
	}
	cout << (dp[n][x] ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

