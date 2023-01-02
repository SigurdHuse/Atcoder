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
	vector<int> v(n);
	for(auto &a: v) cin >> a;
	sort(all(v));
	int cur = 0, extra = 0, r = n;
	for(int i = 0; i < n; ++i){
		if(i > r) break;
		if(v[i] == (cur + 1)) cur++;
		else if(v[i] < (cur + 1)) extra++;
		else{
			while(v[i] > cur + 1){
				if(extra >= 2){
					cur++;
					extra -= 2;
				}
				else{
					r -= 2;
					if(r < i) break;
					cur++;
				}
			}
			if(v[i] == (cur + 1)) cur++;
		}
	}
	cur += extra / 2;
	cout << cur << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

