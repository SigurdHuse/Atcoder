#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool has_seven(int n){
	while(n > 0){
		if(n%10 == 7) return 1;
		n /= 10;
	}
	return 0;
}

void solve(){
	ll k; cin >> k;
	int n= 0;
	for(int i = 1; i <= k; ++i){
		n *= 10;
		n += 7;
		n %= k;
		if(n == 0){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

