#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	vector<ll> v(3);
	for(auto a : v) cin >> a;
	sort(all(v));
	if(v[2] > v[1] + v[0]){
		cout << -1 << endl;
		return;
	}
	if()
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

