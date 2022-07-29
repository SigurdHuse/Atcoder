#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// We look at binary representation 
// A is adding 1 and B is binary shift to left

void solve(){
	ll n; cin >> n;
	string ans = "";
	
	while(n > 0){
		if(n % 2){
			ans += "A";
			n--;
		}
		if(n > 0){
			n >>= 1;
			ans += "B";
		}
	}
	reverse(all(ans));
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

