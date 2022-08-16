#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	pair<int,int> ans = {-1,-1};
	
	for(int i = 2; i <= 1000; ++i){
		int cnt = 0;
		for(int j : v){
			if(j % i == 0) cnt++;
		}
		if(cnt > ans.f){
			ans.f = cnt;
			ans.s = i;
		}
	}
	cout << ans.s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

