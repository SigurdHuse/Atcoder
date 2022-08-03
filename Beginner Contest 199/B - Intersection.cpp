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
	vector<int> a(n), b(n);
	for(auto &t : a) cin >> t;
	for(auto &t : b) cin >> t;
	int first = a[0], last = b[0];
	for(int i = 1; i <n; ++i){
		first = max(first, a[i]);
		last = min(last, b[i]);
	}
	if(last < first) cout << 0 << endl;
	else{
		cout << last - first +1 << endl;
	} 
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

