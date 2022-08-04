#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, cast, power; cin >> n >> cast>> power;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	
	for(auto p : v){
		if(p.f < cast && p.s > power){
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

