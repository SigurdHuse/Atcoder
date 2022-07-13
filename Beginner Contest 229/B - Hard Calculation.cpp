#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// We need to check if the sum of the coeffients 
// of a 10 power is greater than 9

void solve(){
	ll a, b; cin >> a >> b;
	while(a > 0 && b > 0){
		if((a%10 + b%10) > 9){
			cout << "Hard" << endl;
			return;
		}
		a /= 10; b /= 10;
	}
	cout << "Easy" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

