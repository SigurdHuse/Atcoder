#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<ll> low(2), high(2);
	cin>> low[0] >> low[1];
	cin >> high[0] >> high[1];
	vector<ll> pos;
	for(ll i : low){
		for(ll j : high) pos.push_back(i*j);
	}
	cout << *max_element(all(pos)) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

