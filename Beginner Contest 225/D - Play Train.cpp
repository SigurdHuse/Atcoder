#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	// will keep map with front and back stored
	// will then update which component each train
	// belongs to after each query
	int n, x, y, q, c;
	cin >> n >> q;
	
	map<pair<int,int>, vector<int>> mem;
	vector<pair<int,int>> pos(n); 
	REP(i,n) pos[i] = {i,i};
	REP(i,n) mem[make_pair(i,i)] = {i};
	
	REP(i,q){
		cin >> c;
		if(c == 1){
			cin >> x >> y;
			x--; y--;
			pair<int,int> interval2 = pos[y], interval1 = pos[x];
			pair<int,int> new_interval = {interval1.first, interval2.second};
			mem[new_interval] = mem[interval1];
			for(int j : mem[interval2]) mem[new_interval].push_back(j);
			
			for(int j : mem[new_interval]) pos[j] = new_interval;
			mem.erase(interval1); mem.erase(interval2);
		}
		else if(c == 2){
			cin >> x >> y;
			x--; y--;
			
			pair<int,int> interval = pos[x], interval1, interval2;
			vector<int> tmp = mem[interval];
			int mid, sz = tmp.size();
			for(int k = 0; k<sz; ++k){
				if(tmp[k] == x){
					mid = k; break;
				}
			}
			interval1 = {interval.first, mid};
			interval2 = {mid+1, interval.second};
			
			cout << mid << endl;
			for(int l : tmp) cout << l << " ";
			cout << endl;
			
			vector<int> one(tmp.begin(), tmp.begin()+mid);
			vector<int> two(tmp.begin()+mid, tmp.end());
			
			for(int l : one) cout << l << " ";
			cout << endl;
			for(int l : one) cout << l << " ";
			cout << endl;
			
			mem[interval1] = one;
			mem[interval2] = two;
			mem.erase(interval);
			
			for(int k : one) pos[k] = interval1;
			for(int k : two) pos[k] = interval2;
		}
		else{
			cin >> x; x--;
			pair<int,int> interval = pos[x];
			vector<int> tmp = mem[interval];
			cout << (int)tmp.size() << " ";
			for(int k : tmp){
				//cout << k + 1 << " ";
			}
			cout << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}








