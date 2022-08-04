#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Generate all possible permuations of people

vector<set<int>> pos;

void gen(int indx, vector<pair<int,int>> &people, set<int> cur){
	if(indx == SZ(people)){
		pos.push_back(cur);
		return;
	}
	set<int> tmp = cur;
	cur.insert(people[indx].first);
	tmp.insert(people[indx].second);
	gen(indx + 1, people, cur);
	gen(indx + 1, people, tmp);
}

void solve(){
	int n, m, k; cin >> n >> m;
	vector<pair<int,int>> con(m);
	for(auto &[a,b] : con) cin >> a >> b;
	cin >> k;
	vector<pair<int,int>> people(k);
	for(auto &[a,b] : people) cin >> a >> b;
	
	set<int> cur;
	gen(0, people, cur);
	
	int ans = 0;
	for(auto v : pos){
		int cnt = 0;
		for(auto p : con){
			if(v.count(p.f) && v.count(p.s)) cnt++;
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

