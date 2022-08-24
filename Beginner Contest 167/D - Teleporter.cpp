#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We determine where the cycle we enter start and how many steps we use to enter

void solve(){
	int n; cin >> n;
	ll k; cin >> k;
	int v[n];
	for(auto &a : v){
		cin >> a;
		a--;
	}
	int cur = 0;
	ll cnt = 0;
	vector<int> cycle;
	bool visited[n];
	memset(visited, false, sizeof(visited));
	while(!visited[cur]){
		visited[cur] = 1;
		cur = v[cur];
		cnt++;
		if(cnt == k){
			cout << cur + 1 << endl;
			return;
		}
	}
	int goal = cur;
	cycle.push_back(cur);
	cur = v[cur];
	while(cur != goal){
		cycle.push_back(cur);
		cur = v[cur];
	}
	
	k -= cnt - SZ(cycle);
	k %= (ll)SZ(cycle);
	
	//for(int i : cycle) cout << i << " ";
	//cout << endl;
	cout << cycle[k] + 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

