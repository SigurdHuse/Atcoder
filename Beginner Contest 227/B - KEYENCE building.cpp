#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Simple brute force problem, we generate all relevant arease of the building
// and then check if the guess is possible or not

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	set<int> s;
	for(auto &a : v) cin >> a;
	for(int a = 1; a <= 500; ++a){
		for(int b = 1; b <= 500; ++b){
			int area = 4*a*b + 3*a + 3*b;
			if(area > 1000) break;
			s.insert(area);
		}
	}
	int ans = n; 
	for(int i : v){
		ans -= s.count(i);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

