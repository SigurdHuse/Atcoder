#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int n, m;

void search(int cur, vector<int> v){
	if(SZ(v) == n){
		for(int i : v) cout << i << " ";
		cout << endl;
	}	
	for(int j = cur + 1; j <= m; ++j){
		vector<int> tmp = v;
		tmp.push_back(j);
		search(j,tmp);
	}
}

void solve(){
	cin >> n >> m;
	vector<int> tmp;
	search(0,tmp);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

