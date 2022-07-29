#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll res = 0;
	int s, t; cin>> s >> t;
	for(int a = 0; a <= s; ++a){
		for(int b = 0; b <= s; ++b){
			if(a + b > s) break;
			for(int c = 0; c <= s; ++c){
				if(a + b + c > s) break;
				if(a*b*c <= t) res++;
			} 
		}
	}
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

