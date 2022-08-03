#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We need two different permutations of A such that the sum is equal modulo 200
// Will try to precompute sums 

void output(vector<int> &a){
  cout << a.size();
  for(auto &nx : a){
    cout << ' ' << nx;
  }
  cout << '\n';
}

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	
	vector<vector<int>> bk(200, vector<int>(0));
	
	int cnt = min(n, 8);
	
	for(int i = 1; i < (1<<cnt); ++i){
		int sig = 0;
		vector<int> s;
		for(int j= 0; j <cnt; ++j){
			if(i & (1<<j)){
				s.push_back(j+1);
				sig += v[j]; sig %= 200;
			}
		}
		if(bk[sig].size() != 0){
			cout << "Yes" << endl;
			output(bk[sig]);
			output(s);
			return;
		}
		else bk[sig] = s;
	}
	cout << "No" << endl;
	
	/*
	Naive brute force solution, can't handle corner cases
	for(int i = 1; i < n; ++i){
		v[i] += v[i-1];
	}
	
	ll s_x, s_y;
	
	for(int start_x = -1; start_x < n; ++start_x){
		for(int end_x = start_x+1; end_x < n; ++end_x){
			if(start_x == -1) s_x = v[end_x];
			else{
				s_x = v[end_x] - v[start_x];
				s_x %= 200;
			}
			for(int start_y = -1; start_y < n; ++start_y){
				for(int end_y = start_y+1; end_y < n; ++end_y){
					if(start_y == -1) s_y = v[end_y];
					else{
						s_y = v[end_y] - v[start_y];
						s_y %= 200;
					}
					
					if(s_x == s_y && (start_x != start_y || end_x != end_y)){
						for(int i = start_x+1; i <= end_x; ++i) b.push_back(i+1);
						for(int i = start_y+1; i <= end_y; ++i) c.push_back(i+1);
						return;
					}
				}
			}
		}
	}
	*/
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

