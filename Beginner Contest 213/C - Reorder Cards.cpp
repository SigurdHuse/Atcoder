#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// We remap each row and col to what happens after the operations

void solve(){
	int h, w, n; cin >> h >> w >> n;
	int a, b;
	map<int,int> col, row;
	vector<pair<int,int>> numbers(n);
	REP(i,n){
		cin >> a >> b;
		col[a] = INT_MAX;
		row[b] = INT_MAX;
		numbers[i] = {a,b};
	}
	int new_indx = 1;
	for(auto it = col.begin(); it != col.end(); ++it){
		it->second = new_indx;
		new_indx++;
	}
	new_indx = 1;
	for(auto it = row.begin(); it != row.end(); ++it){
		it->second = new_indx;
		new_indx++;
	}
	
	for(auto p : numbers){
		cout << col[p.first] <<" " << row[p.second] << endl;
	}
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

