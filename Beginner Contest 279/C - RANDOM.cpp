#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Count number of # in each column

void solve(){
	int h, w; cin >> h >> w;
	vector<string> sec(h), t(h);
	REP(i,h) cin >> sec[i];
	REP(i,h) cin >> t[i];
	
	unordered_map<string,int> cnt;
	string tmp(h, '0');
	for(int i = 0; i < w; ++i){
		for(int j = 0; j < h; ++j){
			tmp[j] = sec[j][i];
		}
		cnt[tmp]++;
	}
	
	for(int i = 0; i < w; ++i){
		for(int j = 0; j < h; ++j){
			tmp[j] = t[j][i];
		}
		if(cnt[tmp] <= 0){
			cout << "No" << endl;
			return;
		}
		else cnt[tmp]--;
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

