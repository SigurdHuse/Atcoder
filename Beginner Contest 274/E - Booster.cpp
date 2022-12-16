#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct path{
	double speed = 1;
	long double dist = 0;
	double x = 0, y = 0;
	//int chest_nr = 0;
	unordered_set<int> mem, visited;
};

double dist(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2,2) + pow(y1-y2,2));
}

void solve(){
	int n, m; cin >> n >> m;
	vector<pair<double,double>> town(n), chest(m);
	for(auto &[x,y] : town) cin >> x >> y;
	for(auto &[x,y] : chest) cin >> x >> y;
	vector<int> order(m);
	
	long double ans = LDBL_MAX;
	
	// Will do BFS where we try to visit all boosters
	// before going forwards
	// will also check all starting position
	
	REP(i,m) order[i] = i;
	stack<path> q;

	path tmp;
	q.push(tmp);
	while(q.size()){
		auto cur = q.top();
		q.pop();

		if(SZ(cur.visited) == n){
			ans = min(ans, cur.dist + dist(0.0,0.0,cur.x,cur.y) / cur.speed);
			continue;
		}
		if(cur.dist > ans) continue;
		
		for(int j = 0; j < n; ++j){
			if(!cur.visited.count(j)){
				tmp = cur;
				tmp.dist += dist(tmp.x, tmp.y, town[j].f, town[j].s) / tmp.speed;
				tmp.x = town[j].f;
				tmp.y = town[j].s;
				
				tmp.visited.insert(j);
				q.push(tmp);
			}
		}
		for(int i = 0; i < m; ++i){
			if(cur.mem.count(order[i])) continue;
			
			cur.dist += dist(cur.x, cur.y, chest[order[i]].f, chest[order[i]].s) / cur.speed;
			cur.x = chest[order[i]].f;
			cur.y = chest[order[i]].s;
			
			cur.mem.insert(order[i]);
			cur.speed *= 2;
			q.push(cur);
		}
	}


	cout << setprecision(16) << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

