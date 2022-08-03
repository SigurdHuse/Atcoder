#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll n, k; cin >> n >> k;
	while(k--){
		if(n % 200 == 0) n /= 200;
		else{
			string s = to_string(n);
			s += "200";
			n = stoll(s);
		}
	}
	cout << n << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

