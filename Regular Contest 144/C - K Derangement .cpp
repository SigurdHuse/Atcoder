#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	if(n/2 < k){
		cout << -1 << endl;
		return;
	} 
	for(int i = k+1; i <= n; ++i){
		cout << i << " ";
	}
	for(int i = 1; i <= k; ++i) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

