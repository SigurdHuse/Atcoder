#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// As 1 <= a_i <= 2*10^5
// We can use vector as map and then 
// check which numbers we have which are mulitples

// Should have time complexity O(n * log(n))

ll a[200005];

void solve(){
	int n; cin >> n;
	int x, mx = 0;
	for(int i =0 ; i < n; ++i){
		cin >> x;
		mx = max(mx, x);
		a[x]++;
	}
	ll ans = 0;
	for(int inc = 1; inc <= mx; ++inc){
		if(a[inc] == 0) continue;
		for(int j = inc, div = 1; j <= mx; j += inc, div++){
			if((a[j] > 0) && (a[div] > 0)){
				//cout << inc << " " << j <<" " <<div <<endl;
				ans += a[inc] * a[div] * a[j];
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

