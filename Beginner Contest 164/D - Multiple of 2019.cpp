#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int MOD = 2019; 

void solve(){
	string s; cin >> s;
	int n = SZ(s);
	ll res = 0;
	vector<int> cnt(MOD);
	
	cnt[0] = 1;	
	int cur = 0, p = 1;
	for(int i = n-1; i>=0; --i){
		cur = (cur + p * (s[i] - '0')) % MOD;
		res += cnt[cur];
		cnt[cur]++;
		p = p * 10 % MOD;
	}
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

