#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool myfunc(pair<int,int> p1, pair<int,int> p2){
	if(p1.f == p2.f) return p1.s > p2.s;
	return false;
}

void solve(){
	int n, x, y, z; cin >> n >> x >> y >> z;
	vector<int> math(n), eng(n), sum(n);
	for(auto &a : math) cin >> a;
	for(auto &a : eng) cin >> a;
	for(int i = 0; i <n; ++i) sum[i] = math[i] + eng[i];
	
	vector<bool> visited(n);
	
	for(int i = 0; i < x; ++i){
		int mx = INT_MIN, idx = INT_MAX;
		for(int j = 0; j < n; ++j){
			if(!visited[j]){
				if(math[j] == mx){
					idx = min(idx, j);
				}
				if(math[j] > mx){
					mx = math[j];
					idx = j;
				}
			}
		}
		visited[idx] = 1;
	}
	//for(auto b : visited) cout << b << " ";
	//cout << endl;
	for(int i = 0; i < y; ++i){
		int mx = INT_MIN, idx = INT_MAX;
		for(int j = 0; j < n; ++j){
			if(!visited[j]){
				if(eng[j] == mx){
					idx = min(idx, j);
				}
				if(eng[j] > mx){
					mx = eng[j];
					idx = j;
				}
			}
		}
		visited[idx] = 1;
	}
	
	for(int i = 0; i < z; ++i){
		int mx = INT_MIN, idx = INT_MAX;
		for(int j = 0; j < n; ++j){
			if(!visited[j]){
				if(sum[j] == mx){
					idx = min(idx, j);
				}
				if(sum[j] > mx){
					mx = sum[j];
					idx = j;
				}
			}
		}
		visited[idx] = 1;
	}
	
	//for(auto w : visited) cout << w << " ";
	//cout << endl;
	
	for(int i = 0; i <n; ++i){
		if(visited[i]) cout << i + 1 << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

