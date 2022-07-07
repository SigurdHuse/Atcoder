#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

vector<pair<ll,ll>> pos = {{2,1},{1,2},{-1,2},{2,-1},
						{1,-2},{-2,1},{-1,-2},{-2,-1}};

void solve(){
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	vector<pair<ll,ll>> possible, master;
	for(auto p : pos){
		possible.push_back({x1 + p.first,y1+p.second});
	}
	for(auto [xh, yh] : possible){
		for(auto p : pos){
			master.push_back({xh + p.first,yh+p.second});
		}
	}
	
	for(auto [xh, yh] : master){
		if(xh == x2 && yh == y2){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

