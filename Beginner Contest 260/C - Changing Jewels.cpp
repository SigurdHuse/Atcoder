#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	ll n, x, y; cin >> n >> x >> y;
	// Will do brute force;
	vector<ll> red(n+1), blue(n+1);
	red[n] = 1;
	
	bool done = 0;
	while(!done){
		for(int i = n; i > 1; --i){
			red[i-1] += red[i];
			blue[i] = red[i] * x;
			red[i] = 0; 
		}
		
		for(int i = n; i > 1; --i){
			red[i-1] += blue[i];
			blue[i-1] += y * blue[i];
			blue[i] = 0;
		}
		
		done = 1;
		for(int i = n; i > 1; --i){
			if(blue[i] != 0) done = 0;
			if(red[i] != 0) done = 0;
		}
	}
	
	cout << blue[1] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

