#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int SIZE = 100005;

vector<int> pfact(int x){
	vector<int> res;
	for(int i = 2; i*i <= x; ++i){
		while(x%i == 0){
			x /= i;
			res.push_back(i);
		}
	}
	if(x != 1){res.push_back(x);}
	return res;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<bool> fl(SIZE, 1);
	for(int i = 0; i < n; ++i){
		int a; cin >> a;
		
		vector<int> v = pfact(a);
		for(auto &nx : v){
			if(fl[nx]){
				for(int j = nx; j < SIZE; j += nx){fl[j] = 0;}
			}
		}
	}
	vector<int> res;
	for(int i = 1; i <= m; ++i){
		if(fl[i]) res.push_back(i);
	}
	cout << res.size() << endl;
	for(auto &nx : res) cout << nx << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

