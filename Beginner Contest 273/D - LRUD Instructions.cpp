#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int h, w; cin >> h >> w;
	int rs, cs, n; cin >> rs >> cs >> n;
	int r, c;
	
	unordered_map<int, vector<int>> col;
	unordered_map<int, vector<int>> row;
	while(n--){
		cin >> r >> c;
		row[r].push_back(c);
		col[c].push_back(r);
	}
	
	for(auto p : col) sort(all(p.second));
	for(auto p : row) sort(all(p.second));
	
	int q, l; cin >> q;
	char d;
	while(q--){
		cin >> d >> l;
		if(d == 'L'){
			if(row[rs].empty() || row[rs][0] >= cs){
				cs -= l;
				cs = max(1, cs);
			}
			else{
				auto it = lower_bound(all(row[cs]), cs);
				if(it == row[cs].end()){
					cs = max(row[cs][0] + 1, cs - l);
				}
				else{
					cs = max(*it + 1, cs - l);
				}
			}
		}
		
		if(d == 'R'){
			if(row[rs].empty() || row[rs].back() <= cs){
				cs += l;
				cs = min(w, cs);
			}
			else{
				auto it = upper_bound(all(row[rs]), cs);
				if(it == row[rs].end()){
					cs = min(row[rs].back() - 1, rs + l);
				}
				else cs = min(*it - 1, cs + l);
			}
		}
		
		if(d == 'D'){
			if(col[cs].empty() || col[cs].back() <= rs){
				rs += l;
				rs = min(h, rs);
			}
			else{
				auto it = upper_bound(all(col[cs]), rs);
				if(it == col[cs].end()){
					rs = min(col[cs].back() - 1, rs + l);
				}
				else{
					rs = min(*it - 1, rs + l);
				}
			}
		}
		
		if(d == 'U'){
			if(col[cs].empty() || (col[cs][0] >= rs)){
				rs -= l;
				rs = max(1, rs);
			}
			else{
				auto it = lower_bound(all(col[cs]), rs);
				if(it == col[cs].end()){
					rs = max(col[cs][0] +1, rs - l);
				}
				else{
					rs = max((*it) +1, rs - l);
				}
			}
		}
		cout << rs << " " << cs << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

