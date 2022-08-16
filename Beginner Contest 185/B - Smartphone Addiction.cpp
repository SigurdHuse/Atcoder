#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, m, t; cin >> n >> m >> t;
	vector<pair<int,int>> v(m);
	for(auto &[a,b] : v) cin >> a >> b;
	
	ll cur = n, time = 0;
	for(auto &[a,b] : v){
		cur -= a - time;
		if(cur <= 0){
			cout << "No" << endl;
			return;
		}
		cur = min(n, cur + b - a);
		time = b;
	}
	cur -= t - time;
	if(cur <= 0){
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

