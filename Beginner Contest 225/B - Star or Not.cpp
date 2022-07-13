#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, n; cin >> n;
	vector<int> v(n);
	REP(i,n-1){
		cin >> a >> b;
		a--; b--;
		v[a]++; v[b]++;
	}
	for(int i : v){
		if(i == n-1){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

