#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

vector<ll> powers(14);

void solve(){
	ll n; cin >> n;
	powers[0] = 1;
	for(int i = 1; i < 14; ++i) powers[i] = powers[i-1]*27;
	sort(all(powers), greater<ll>());
	string ans = "";
	
	while(n){
		n--;
		int r = n % 26;
		char ch = 'a' + r;
		ans += ch;
		n /= 26;
	}
	reverse(all(ans));
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

