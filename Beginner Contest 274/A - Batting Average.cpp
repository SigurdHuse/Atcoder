#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	double a, b; cin >> a >> b;
	double div = b / a;
	string ans = to_string(div);
	if(ans[5] - '0' >= 5){
		ans[4]++;
		if(ans[4] == '0'){
			ans[3]++;
			if(ans[3] == '0'){
				ans[2]++;
			}
		}
	}
	for(int i = 0; i < 5; ++i) cout << ans[i];
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

