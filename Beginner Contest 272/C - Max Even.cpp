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
	int a;
	vector<int> even, odd;
	for(int i = 0; i< n; ++i){
		cin >> a;
		if(a & 1) odd.push_back(a);
		else even.push_back(a);
	}
	
	sort(all(odd));
	sort(all(even));
	
	int ans = -1;
	if(SZ(even) > 1){
		int n1 = SZ(even);
		ans = even[n1-1] + even[n1-2];
	}
	if(SZ(odd)> 1){
		int n2 = SZ(odd);
		ans = max(ans, odd[n2-1] + odd[n2-2]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

