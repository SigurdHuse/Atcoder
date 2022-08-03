#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool myfunc(pair<int,int> p1, pair<int,int> p2){
	if(p1.f == p2.f) return p1.s < p2.s;
	return 0;
}

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	int mia = INT_MAX, mib = INT_MAX;
	
	sort(all(v));
	
	for(auto p : v){
		if(p.f < mia){
			mia = p.f;
			if(p.s + p.f < mib){
				mib = p.s + p.f;
			}
		}
		else if(p.s < mib){
			mib = p.s;
		}
	}
	cout << max(mia, mib) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

