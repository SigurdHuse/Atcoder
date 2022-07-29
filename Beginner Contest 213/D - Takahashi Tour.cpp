#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<set<int>> roads(n);
	int a, b;
	REP(i,n-1){
		cin >> a >> b;
		a--; b--;
		roads[a].insert(b);
		roads[b].insert(a);
	}
	
	stack<int> q;
	q.push(0);
	
	vector<int> ans;
	
	while(!q.empty()){
		int cur = q.top();
		ans.push_back(cur + 1);
		if(roads[cur].empty()){
			if(cur == 0) break;
			else q.pop();
		}
		else{
			int next = *roads[cur].begin();
			q.push(next);
			roads[cur].erase(next);
			roads[next].erase(cur);
		}
	}
	for(int i : ans) cout << i <<" ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

