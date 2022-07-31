#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct interval{
	int first, second, t;
};
if(v[i].f <= v[j].s && v[i].f >= v[j].f) ans++;
else if(v[j].f <= v[i].s && v[j].f >= v[i].f) ans++;
void solve(){
	int n; cin >> n;
	vector<interval> v(n);
	REP(i,n){
		cin >> v[i].t >> v[i].f >> v[i].s;
	}
	int ans = 0;
	for(auto p : v) cout << p.f <<" " << p.s << endl;
	for(int i = 0; i < n; ++i){
		for(int j = i + 1; j < n; ++j){
			if(v[i].t == 1){
				if(v[j].t == 1){
					if(v[i].f <= v[j].s && v[i].f >= v[j].f) ans++;
					else if(v[j].f <= v[i].s && v[j].f >= v[i].f) ans++;
				}
				if(v[j].t == 2){
					if(v[i].f < v[j].s && v[i].f >= v[j].f) ans++;
					else if(v[j].f <= v[i].s && v[j].f >= v[i].f) ans++;
				}
				if(v[j].t == 3){
					if(v[i].f <= v[j].s && v[i].f > v[j].f) ans++;
					else if(v[j].f < v[i].s && v[j].f >= v[i].f) ans++;
				}
				if(v[j].t == 4){
					if(v[i].f <= v[j].s && v[i].f >= v[j].f) ans++;
					else if(v[j].f <= v[i].s && v[j].f >= v[i].f) ans++;
				}
			}
			if(v[i].t == 2){
				if(v[j].t == 1){
					
				}
				if(v[j].t == 2){
					
				}
				if(v[j].t == 3){
					
				}
				if(v[j].t == 4){
					
				}
			}
			if(v[i].t == 3){
				if(v[j].t == 1){
					
				}
				if(v[j].t == 2){
					
				}
				if(v[j].t == 3){
					
				}
				if(v[j].t == 4){
					
				}
			}
			if(v[i].t == 4){
				if(v[j].t == 1){
					
				}
				if(v[j].t == 2){
					
				}
				if(v[j].t == 3){
					
				}
				if(v[j].t == 4){
					
				}
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

