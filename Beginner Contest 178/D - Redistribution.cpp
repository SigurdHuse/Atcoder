#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Knapsack

const ll M = 1e9 + 7;

void solve(){
	int s; cin >> s;
	vector<ll> a(s + 1);
	a[0] = 1;
	for(int i = 3; i <= s; ++i){
		a[i] = (a[i-1]+a[i-3])%M;
	}
	cout << a[s] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

