#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, cur = 0; cin >> n;
	string s; cin >> s;
	pair<int,int> pos= {0,0};
	vector<pair<int,int>> dir = {{1,0}, {0,-1},{-1,0},{0,1}};
	for(char c : s){
		if(c == 'S'){
			pos.first += dir[cur].first;
			pos.second += dir[cur].second;
		}
		else{
			cur++;
			cur %= 4;
		}
	}
	cout << pos.first << " " << pos.second << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

