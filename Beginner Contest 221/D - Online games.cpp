#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 
const int N =  200010;

void solve(){
	int n, a, b; cin >> n;
	vector<pair<int,int>> x;
	int cnt;
	int ans[N];
	REP(i,N) ans[i] = 0;
	
	REP(i,n){
		cin >> a >> b;
		x.push_back({a,1});
		x.push_back({a+b, -1});
	}
	sort(all(x));
	cnt = 0;
	
	REP(i, (int)(x.size()) - 1){
		cnt += x[i].second;
		ans[cnt] += ((x[i+1].first) - (x[i].first));
	}
	
	REP(i, n - 1) cout << ans [i+1] << " ";
	cout << ans[n] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

