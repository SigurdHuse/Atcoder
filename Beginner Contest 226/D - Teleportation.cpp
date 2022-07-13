#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[x,y] : v) cin >> x >> y;
	set<pair<int,int>> s;
	
	for(auto p1 : v){
		for(auto p2 : v){
			int xdiff = p2.first - p1.first;
			int ydiff = p2.second - p1.second;

			if(xdiff == 0 && ydiff == 0) continue;
			//if(s.count({xdiff, ydiff})) continue;
			
			int steps;
			if(xdiff == 0 || ydiff == 0) steps = max(abs(xdiff),abs(ydiff));
			else steps = __gcd(abs(xdiff), abs(ydiff));
			//cout << xdiff << " " << ydiff << " "<<steps << endl;
			s.insert({xdiff/steps, ydiff/steps});
		}
	}
	/*
	for(auto p : s){
		cout << p.first << " " << p.second << endl;
	}
	*/
	cout << s.size() << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

