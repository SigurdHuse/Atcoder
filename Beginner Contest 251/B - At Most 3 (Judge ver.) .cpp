#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, w; cin >> n >> w;
	vector<int> v(n);
	vector<bool> mem(w+1, 0);
	for(auto &A : v) cin >> A;
	for(int i = 0; i< n; ++i){
		if(v[i] <= w) mem[v[i]] = 1;
		else continue;
		for(int j = i+1; j <n; ++j){
			if(v[i] + v[j] <= w) mem[v[i] + v[j]] = 1;
			else continue;
			for(int k = j+1; k < n; ++k){
				if(v[i] + v[j] + v[k] <= w){
					mem[v[i] + v[j] + v[k]] = 1;
				}
			}
		}
	}
	cout << accumulate(all(mem),0) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

