#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	unordered_map<int, vector<int>> mem;
	
	int A, B;
	
	REP(i,n){
		cin >> A >> B;
		mem[A].push_back(B);
		mem[B].push_back(A);
	}
	
	unordered_set<int> seen;
	seen.insert(1);
	stack<int> q;
	
	int ans = 1;
	
	q.push(1);
	
	while(!q.empty()){
		int cur = q.top(); q.pop();
		
		ans = max(ans, cur);
		
		for(int next : mem[cur]){
			if(!seen.count(next)){
				seen.insert(next);
				q.push(next);
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

