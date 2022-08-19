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
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	for(int i = 0; i < n-2; ++i){
		if((v[i].f == v[i].s) && (v[i+1].f == v[i+1].s) && (v[i+2].f == v[i+2].s)){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

