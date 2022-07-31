#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Alice wins her first when number of stones = a
// Then she wins until a + b
// Then she loses until 2*a + b
// Then she wins until 2*a + 2*b
// Then she loses until 3*a + 2*b

void solve(){
	ll n, a, b; cin >> n >> a >>b;
	if(n < a){
		cout << 0 << endl;
		return;
	}
	bool turn = 1;
	ll ans = 0;
	while(n > 0){
		if(turn) n -= a;
		else if(n - b >= 0){
			ans += b + 1;
			n -= b;
		}
		else{
			ans += n + 1;
			n = 0;
		}
		turn ^= 1;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

