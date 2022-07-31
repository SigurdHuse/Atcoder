#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

// We can count how many occurences of the next letter for each letter

void solve(){
	string ref("chokudai");
	vector<int> charmap(256,-1);
	string S; cin >> S;
	for(int i = 0; i < 8; ++i){
		charmap[ref[i]] = i;
	}
	int n = S.size();
	vector<ll> dp(9,0);
	
	dp[0] = 1;
	for(int i = 0; i <n; ++i){
		int c = charmap[S[i]];
		if(c >= 0){
			dp[c + 1] += dp[c];
			dp[c + 1] %= M;
		}
		//for(ll j : dp) cout << j <<" ";
		//cout << endl;
	}
	cout << dp[8] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

