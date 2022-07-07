#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int l, r; cin >> l >> r;
	l--; r--;
	string s; cin >> s;
	//int n = s.size();
	for(int i = l; i <= l + (r-l)/2; ++i){
		//cout << i << " " << r + l - i << endl;
		swap(s[i], s[r+l-i]);
	}
	cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

