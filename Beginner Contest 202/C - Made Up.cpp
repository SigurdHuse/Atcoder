#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 


void solve(){
	int n, j; cin >> n;
	map<int,vector<int>> b;
	map<int,int> a,c;
	REP(i,n){
		cin >> j; j--;
		a[j]++;
	}
	REP(i,n){
		cin >> j; j--;
		b[j].push_back(i);
	}
	REP(i,n){
		cin >> j; j--;
		c[j]++;
	}
	ll ans = 0;
	for(auto p : a){
		ll cnt1 = p.s, cnt2 = 0;
		for(int i : b[p.f]){
			if(c.count(i)) cnt2 += c[i];
		}
		ans += cnt1*cnt2;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

