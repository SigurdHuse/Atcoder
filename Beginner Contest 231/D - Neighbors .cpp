#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, m, a, b; cin >> n >> m;
	vector<int> v(n);
	REP(i,m){
		cin >> a >> b;
		a--; b--;
		v[a]++; v[b]++;
	}
	int one_count = 0;
	for(int i : v){
		if(i <= 1) one_count++;
		if(i > 2){
			cout << "No" << endl;
			return;
		}
	}
	if(one_count < 2) cout << "No" << endl;
	else cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

