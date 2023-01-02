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
	int n,m; cin >> n >> m;
	int wanted = 0;
	for(int i = 0; i < m; ++i){
		wanted |= (1 << i);
	}
	vector<int> pos(n);
	for(int i = 0; i < n; ++i){
		string s; cin >> s;
		int tmp = 0;
		for(int j = 0; j < m; ++j){
			if(s[j] == 'o'){
				tmp |= (1 << j);
			}
		}
		//cout << tmp << endl;
		pos[i] = tmp;
	}
	int ans = 0;
	
	for(int i =0 ; i < n; ++i){
		for(int j = i+1; j < n; ++j){
			if((pos[i] | pos[j]) == wanted) ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

