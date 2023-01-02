#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct Perm{
	string X;
	int idx, underscore;
};

void solve(){
	int n, m; cin >> n >> m;
	vector<string> v(n);
	int cnt = 0;
	for(auto &s : v){
		cin >> s;
		cnt += SZ(s);
	}
	
	set<string> used;
	string t;
	while(m--){
		cin >> t;
		used.insert(t);
	}
	
	int underscores = 16 - cnt;
	vector<int> order(n);
	REP(i,n) order[i] = i;
	
	do{
		Perm tmp;
		tmp.X = v[order[0]];
		tmp.idx = 0;
		tmp.underscore = 0;
		queue<Perm> q;
		q.push(tmp);
		
		while(q.size()){
			auto p = q.front();
			q.pop();
			p.idx++;
			if(p.idx == n){
				if((!used.count(p.X)) && (SZ(p.X) >= 3) && (SZ(p.X) <= 16)){
					cout << p.X << endl;
					return;
				}
				continue;
			}
			
			
			for(int i = p.underscore; i < underscores; ++i){
				p.X += "_";
				p.underscore++;
				tmp = p;
				tmp.X += v[order[tmp.idx]];
				q.push(tmp);
			}
		}
	}
	while(next_permutation(all(order)));
	
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

