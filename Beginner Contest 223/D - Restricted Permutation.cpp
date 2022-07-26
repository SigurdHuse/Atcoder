#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// keep map and recursively until nothing before

map<int,vector<int>> mem;

set<int> visited;

vector<int> ans;

int n, m;


void print(int cur){
	if(visited.count(cur) || cur > n) return;
	if(mem[cur].empty()){
		cout << cur << " ";
		visited.insert(cur);
	}
	else{
		visited.insert(cur);
		for(int i : mem[cur]){
			print(i);
		}
		cout << cur << " ";
	}
	print(cur + 1);
}

void solve(){
	int a, b;
	cin >> n >> m;
	REP(i,m){
		cin >> a >> b;
		mem[b].push_back(a);
	}
	for(auto p : mem) sort(all(p.second));
	
	print(1);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

