#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &h : v) cin >> h;
	v.push_back(-1);
	for(int i = 0; i< n; ++i){
		if(v[i+1] <= v[i]){
			cout << v[i] << endl;
			return;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

