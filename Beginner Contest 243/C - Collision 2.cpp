#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> x(n), y(n);
	for(int i = 0; i <n; ++i) cin >> x[i] >> y[i];
	string s; cin >> s;
	map<int, int> right, left;
	for(int i = 0; i < n; ++i){
		if(s[i] == 'L'){
			if(left[y[i]] < x[i]){
				cout << "Yes" << endl;
				return;
			}
			right[y[i]] = max(right[y[i]], x[i]);
		}
		else{
			if(right[y[i]] > x[i]){
				cout << "Yes" << endl;
				return;
			}
			left[y[i]] = min(left[y[i]], x[i]);
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

