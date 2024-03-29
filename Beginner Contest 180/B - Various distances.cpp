#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<long double> v(n);
	for(auto &a : v) cin >> a;
	
	long double man = 0, euc = 0, cheb = -1e6;
	for(long double x : v){
		man += abs(x);
		euc += abs(x)*abs(x);
		cheb = max(cheb, abs(x));
	}
	cout << setprecision(16);
	cout << man << endl;
	cout << sqrt(euc) << endl;
	cout << cheb << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

