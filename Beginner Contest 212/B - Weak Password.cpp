#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int pin; cin >> pin;
	int x1, x2, x3, x4;
	x4 = pin % 10; pin /= 10;
	x3 = pin % 10; pin /= 10;
	x2 = pin % 10; pin /= 10;
	x1 = pin % 10; pin /= 10;
	
	if(x1 == x2 && x1 == x3 && x1 == x4 && x2 == x3 && x2 == x4 && x3 == x4){
		cout << "Weak" << endl;
		return;
	}
	if((x2 == ((x1 + 1)%10)) && (x3 == ((x2+1)%10)) && (x4 == ((x3 + 1)%10))){
		cout << "Weak" << endl;
		return;
	}
	cout << "Strong" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

