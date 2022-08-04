#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, x; cin >> n >> x;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	int cur = 0, idx = 0;
	while(idx < n){
		if(v[idx] != x){
			v[cur] = v[idx];
			cur++;
		} 
		idx++;
	}
	for(int i = 0; i < cur; ++i){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

