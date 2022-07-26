#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll k, a, b; cin >> k >> a >> b;
	ll new_a = 0, new_b = 0;
	ll factor = 1;
	while(a){
		new_a += (a % 10)*factor;
		factor *= k;
		a /= 10;
	}
	factor = 1;
	while(b){
		new_b += (b % 10)*factor;
		factor *= k;
		b /= 10;
	}
	cout << new_b * new_a << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

