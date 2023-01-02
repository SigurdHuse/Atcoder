#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// will use array to store starts and stops

const int N = 2e5 + 10;


void solve(){
	int n, l, r; cin >> n;
	vector<vector<int>> v(N);
	
	for(int i = 1; i<= n; ++i){
		cin >> l >> r;
		v[l].push_back(i);
		v[r].push_back(-i);
	}
	int idx = INT_MAX;
	set<int> cur;
	
	vector<pair<int,int>> ans;
	
	for(int i = 1; i < N; ++i){
		if(v[i].size()){
			for(int j : v[i]){
				if(j > 0){
					if(idx == INT_MAX) idx = i;
					cur.insert(-j);
				}
				else cur.erase(j);
			}
			if(SZ(cur) == 0){
				ans.push_back({idx,i});
				idx = INT_MAX;
			}
		}
	}
	sort(all(ans));
	for(auto &[x,y] : ans){
		cout << x << " " << y << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

