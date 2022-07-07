#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int Q, x, c, tp; cin >> Q;
	deque<pair<ll,ll>> q;
	while(Q--){
		cin >> tp;
		if(tp == 1){
			cin >> x >> c;
			q.push_front({x,c});
		}
		else{
			cin >> c;
			ll s= 0;
			while(c){
				if(q.back().second <= c){
					c -= q.back().second;
					s += q.back().second*q.back().first;
					q.pop_back();
				}
				else{
					s += q.back().first*c;
					q.back().second -= c;
					c = 0;
				}
			}
			cout << s <<endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

