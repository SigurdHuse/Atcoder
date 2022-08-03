#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n; cin >> n;
	while(n % 10 == 0 && n != 0) n /= 10;
	string s = to_string(n);
	int size = SZ(s);
	for(int i = 0; i < size/2; ++i){
		if(s[i] != s[size - i - 1]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

