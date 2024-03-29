#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n), b(k);
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	int mx = *max_element(all(a));
	
	for(auto j : b){
		if(a[j-1] == mx){
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

