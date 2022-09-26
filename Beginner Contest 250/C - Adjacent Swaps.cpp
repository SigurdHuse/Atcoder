#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, q; cin >> n >> q;
	vector<int> ans(n+1), indx(n+1);
	REP(i,n+1){
		ans[i] = i;
		indx[i] = i;
	}
	int x;
	while(q--){
		cin >> x;
		if(indx[x] == n){
			int tmp = ans[n-1];
			ans[n-1] = x;
			indx[x] = n-1;
			ans[n] = tmp;
			indx[tmp] = n;
		}
		else{
			int tmp = ans[indx[x] + 1];
			ans[indx[x] + 1] = x;
			ans[indx[x]] = tmp;
			indx[x]++;
			indx[tmp]--;
		}
	}
	for(int i = 1; i <= n; ++i) cout << ans[i] << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

