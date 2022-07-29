#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m, k, a; cin >> n >>m;
	vector<stack<int>> v(m);
	REP(i, m){
		cin >> k;
		REP(j, k){
			cin >> a;
			a--;
			v[i].push(a);
		}
	}
	
	vector<bool> seen(n);
	bool valid = 1, changed = 0;
	int i = 0;
	
	while(valid){
		while(!v[i].empty() && seen[v[i].top()]){
			changed = 1;
			seen[v[i].top()] = 1;
			v[i].pop();
		}
		if(!v[i].empty()) seen[v[i].top()] = 1;
		i++;
		if(i == m){
			if(changed){
				changed = 0;
			}
			else valid = 0;
			i = 0;
		}
	}
	for(auto p : v){
		if(!p.empty()){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

