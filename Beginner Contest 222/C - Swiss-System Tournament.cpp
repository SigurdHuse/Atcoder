#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

bool myfunc1(pair<int,int> p1, pair<int,int> p2){
	if(p1.first == p2.first) return p1.second < p2.second;
	return false;
}

bool myfunc2(pair<int,int> p1, pair<int,int> p2) {return p1.first > p2.first;}

void find_rank(vector<pair<int,int>> &v){
	sort(all(v), myfunc2);
	sort(all(v), myfunc1);
	//for(auto p : v) cout << p.first <<" " << p.second << endl;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<pair<int,int>> v(2*n);
	vector<string> a(2*n);
	REP(i,2*n) v[i].second = i+1;
	for(auto &s : a) cin >> s;
	
	REP(i,m){
		for(int j = 0; j < 2*n; j += 2){
			int p1 = v[j].second - 1, p2 = v[j+1].second - 1;
			if(a[p1][i] == 'C' && a[p2][i] == 'C'){
				v[p1].first++;
				v[p2].first++;
			}
			if(a[p1][i] == 'P' && a[p2][i] == 'P'){
				v[p1].first++;
				v[p2].first++;
			}
			
			if(a[p1][i] == 'G' && a[p2][i] == 'G'){
				v[p1].first++;
				v[p2].first++;
			}
			
			if(a[p1][i] == 'G' && a[p2][i] == 'C') v[p1].first += 2;
			
			if(a[p1][i] == 'P' && a[p2][i] == 'G') v[p1].first += 2;
			
			if(a[p1][i] == 'C' && a[p2][i] == 'P') v[p1].first += 2;
			
			if(a[p1][i] == 'G' && a[p2][i] == 'P') v[p2].first += 2;
			
			if(a[p1][i] == 'P' && a[p2][i] == 'C') v[p2].first += 2;
			
			if(a[p1][i] == 'C' && a[p2][i] == 'G') v[p2].first += 2;
		}
		find_rank(v);
	}
	for(auto p : v) cout << p.second << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

