#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	map<int,int> mem;
	for(auto &x : a) cin>> x;
	for(auto &x : b) cin >> x;
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] == b[i]) cnt1++;
		else{
			if(mem[a[i]]) cnt2++;
			if(mem[b[i]]) cnt2++;
		}
		mem[a[i]]++;
		mem[b[i]]++;
	}
	cout << cnt1 << endl << cnt2 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

