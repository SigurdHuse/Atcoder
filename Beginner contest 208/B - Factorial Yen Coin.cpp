#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// greedy

void solve(){
	vector<ll> fac(11, 1);
	for(int i = 2; i < 11; ++i){
		fac[i] = i * fac[i-1];
	}
	
	int indx = 10, p; cin>> p;
	int ans = 0;
	while(p > 0){
		while(fac[indx] > p) indx--;
		p -= fac[indx];
		ans ++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

