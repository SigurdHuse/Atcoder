#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<int> v(4);
	for(auto &a : v) cin >> a;
	vector<int> board(150);
	for(int i = v[0] + 1; i <= v[1]; ++i){
		board[i]++;
	}
	int ans = 0;
	for(int i = v[2] +1; i <= v[3]; ++i){
		board[i]++;
		ans += (board[i] == 2);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

