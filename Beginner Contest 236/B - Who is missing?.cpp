#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(4*n-1);
	for(auto &a: v) cin >> a;
	sort(all(v));
	v.push_back(-1);
	for(int i = 0; i < 4*n; i += 4){
		if(v[i] != v[i+3]){
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

