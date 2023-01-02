#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Start by finding pythagorian triples
// Meaning that (i-k)^2 + (j - k)^2 = M

// Then we find which cols and rows we can be in at the end

vector<pair<int,int>> dirs = {{1,1}, {-1,-1}, {-1,1},{1,-1}};

struct Node{
	int x, y, dist;
	
	Node(int new_x, int new_y, int new_dist){
		x = new_x;
		y = new_y;
		dist = new_dist;
	};
	bool operator<(const Node& rhs) const
	{
		return rhs.dist < dist;
	}
};

void solve(){
	ll n, m; cin >> n >> m;
	set<pair<int,int>> moves;
	
	int i = sqrt(m) +2, j = 0;
	
	while(j <= i){
		if(j*j + i*i == m){
			moves.insert({i,j});
			moves.insert({j,i});
		}
		if(j*j + i*i > m) i--;
		else j++;
		
	}
	//moves.insert({0,m});
	//moves.insert({m,0});
	
	//for(auto p : moves) cout << p.f << " " << p.s << endl;
	
	priority_queue<Node> q;
	vector<vector<int>> board(n, vector<int>(n,INT_MAX));
	board[0][0] = 0;
	
	q.push(Node(0,0,0));
	
	while(q.size()){
		auto cur = q.top();
		q.pop();
		//cout << cur.dist << endl;
		for(auto p : moves){
			for(auto dir : dirs){
				int x = cur.x + p.f * dir.f;
				int y = cur.y + p.s * dir.s;
				if(x >= n || x < 0) continue;
				if(y >= n || y < 0) continue;
				
				int c = cur.dist + 1;
				
				if(c < board[y][x]){
					board[y][x] = c;
					q.push(Node(x, y, c));
				}
			}
		}
	}
	for(auto v : board){
		for(int r : v) cout << (r == INT_MAX ? -1 : r)<< " ";
		cout << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

