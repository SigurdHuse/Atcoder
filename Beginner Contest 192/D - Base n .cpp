#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Was able to implement binary search trough logic ans memory
// Very pleased with that, shows mastery of the concept

long double base_n(string &x, ll n){
	long double ans = 0;
	ll size = SZ(x);
	for(int i = size - 1; i >= 0; --i){
		ans += (x[i] - '0')*pow(n,size - i - 1);
	}	
	return ans;
}

void solve(){
	string x; cin >> x;
	ll m; cin >> m;
	int d = 0;
	for(char c : x) d = max(d, c - '0');
	if(SZ(x) == 1){
		cout << (d <= m) << endl;
		return;
	}
	ll left = 0, right = m, mid;
	while(left <= right){
		mid = left + (right - left)/2;
		long double tmp = base_n(x, mid);
		if(tmp <= m){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	
	cout << max(right - d, 0ll) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

