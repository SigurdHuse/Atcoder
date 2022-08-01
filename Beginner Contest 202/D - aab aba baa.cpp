#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int MAX= 30;
ll dp[MAX+1][MAX + 1];

string find_kth(int A, int B, ll k){
	if(A == 0) return string(B, 'b');
	if(B == 0) return string(A, 'a');
	if(k <= dp[A - 1][B]){
		return string("a") + find_kth(A-1,B,k);
	}
	else{
		return string("b") + find_kth(A, B-1, k - dp[A-1][B]);
	}
}

void solve(){
	ll a, b, k; cin >> a >> b >> k;
	string s = "";
	dp[0][0] = 1;
	for(int i = 0; i <=a; ++i){
		for(int j = 0; j <= b; ++j){
			if(i > 0){
				dp[i][j] += dp[i-1][j];
			}
			if(j > 0){
				dp[i][j] += dp[i][j-1];
			}
		}
	}
	cout << find_kth(a,b,k)<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

