#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll k; cin >> k;
	k-=2;
	if(k == -1 || k == 0){
		cout << (k == -1 ? 0 : 2) << endl;
		return;
	}
	vector<vector<ll>> ncr(50, vector<ll>(50,0));
	for(int i = 0; i < 50; ++i){
		for(int j = 0; j < 50; ++j){
			if(i == j || j == 0) ncr[i][j] = 1;
			else if(j < i){
				ncr[i][j] = ncr[i-1][j] + ncr[i-1][j-1];
			}
		}
	}
	int cnt = 1;
	string s = "2";
	while(k > 0){
		for(int i = 0; i <= cnt; ++i){
			if(ncr[cnt][i] <= k){
				k -= ncr[cnt][i];
			}
			else{
				REP(i,cnt) s += "0";
				int indx = 1;
				while(cnt)
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

