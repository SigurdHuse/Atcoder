#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	vector<bool> circle(361, 0);
	circle[0] = 1;
	circle[360] = 1;
	int cur = 0;
	for(int i : v){
		cur += i; 
		cur %= 360;
		circle[cur] = 1;
	} 
	int mx = 0;
	int start = 0;
	REP(i, 361){
		if(circle[i]){
			mx = max(mx, i - start);
			start = i;
		}
	}
	cout << mx << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

