#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	vector<string> v(9);
	for(auto &a : v) cin >> a;
	
	vector<pair<int,int>> idx;
	
	for(int y = 0; y < 9; ++y){
		for(int x = 0; x < 9; ++x){
			if(v[y][x] == '#'){
				idx.push_back({y,x});
			}
		}
	}
	int n= SZ(idx);
	
	int ans = 0;
	
	for(int i = 0; i < n; ++i){
		int x = idx[i].s, y = idx[i].f;
		for(int j = 0; j < n; ++j){
			if(j == i) continue;
			int dy = idx[j].f - y;
			int dx = idx[j].s - x;
			for(int k = 0; k < n; ++k){
				if((k == i) || (k == j)) continue;
				if(((y - idx[k].f) == dx) && ((x - idx[k].s) == dy)){
					//cout << idx[i].f << " " << idx[i].s << endl;
					//cout << idx[j].f << " " << idx[j].s << endl;
					//cout << idx[k].f << " " << idx[k].s << endl;
					for(int t = 0; t < n; ++t){
						if((t == i) || (t == j) || (t == k)) continue;
						if(((idx[t].f - idx[k].f) == dy) && ((idx[t].s-idx[k].s) == dx)){
							//cout << idx[t].f << " " << idx[t].s << endl;
							ans++;
						}
						//cout << endl;
					}
				}
			}
		}
	}
	//ans /= 4;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

