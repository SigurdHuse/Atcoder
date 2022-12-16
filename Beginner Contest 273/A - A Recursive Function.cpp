#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int f(int k){
	if(k == 0) return 1;
	return k * f(k-1);
}

void solve(){
	int n; cin >> n;
	cout << f(n) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

