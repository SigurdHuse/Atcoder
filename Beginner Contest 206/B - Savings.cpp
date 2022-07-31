#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Could maybe do binary search for O(log(n))
// But this is fast enough

void solve(){
	ll n; cin >> n;
	ll start = sqrt(n);
	for(;start <= n; ++start){
		if(start*(start + 1)/2 >= n){
			cout << start << endl;
			return;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

