#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), squ(4);
	for(auto &a : v) cin >> a;
	int p = 0;
	
	for(int i = 0; i< n; ++i){
		squ[0]++;
		for(int j = 3; j >= 0; --j){
			if(j + v[i] > 3) p += squ[j];
			else squ[j + v[i]] = squ[j];
			squ[j] = 0;
		}
	}
	cout << p << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

