#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<pair<string,string>> v(n);
	for(auto &[a, b] : v) cin >> a >> b;
	
	for(int i = 0; i < n; ++i){
		for(int j = i +1; j < n; ++j){
			if(v[i].first == v[j].first && v[i].second == v[j].second){
				cout << "Yes" << endl;
				return;
			}
		}	
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

