#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Solvable in O(n^3)

bool is_line(double x1, double y1, double x2, double y2, double x3, double y3){
	if(x1 == x2){
		return x1 == x3;
	}
	if(y1 == y2){
		return y1 == y3;
	}
	double slope = (y2 - y1)/(x2 - x1);
	double x_diff = x3 - x1;
	return (y1 + x_diff*slope) == y3; 
}

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	
	for(int i = 0; i < n; ++i){
		for(int j = i +1; j < n; ++j){
			for(int k = j + 1; k < n; ++k){
				if(is_line(v[i].f, v[i].s,v[j].f, v[j].s,v[k].f, v[k].s)){
					cout << "Yes" << endl;
					return;
				}
			}
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

