#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

vector<vector<int>> ncr(12, vector<int>(12));

int fac(int n){
	int result = 1;
	for(int i = 1; i <= n; ++i){
		result *= i;
	}
	return result;
}

void solve(){
	string s; cin >> s;
	int ans = 0;
	for(int i = 0; i <= 9999; ++i){
		vector<bool> flag(10);
		int x = i;
		for(int j = 0; j < 4; ++j){
			flag[x%10] = 1;
			x /= 10;
		}
		bool flag2 = 1;
		for(int j =0; j < 10; ++j){
			if(s[j] == 'o' && !flag[j]) flag2 = 0;
			if(s[j] == 'x' && !flag[j]) flag2 = 0;
		}
		ans += flag2;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

