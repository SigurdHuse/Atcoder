#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// need to keep track of smallest

void solve(){
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	int p, q;
	ll x;
	ll sum = 0;
	cin >> q;
	REP(qq, q){
		cin >> p;
		if(p == 1){
			cin >> x;
			pq.push(x - sum);
		}
		else if(p == 2){
			cin >> x;
			sum += x;
		}
		else if(p == 3){
			x = pq.top();
			cout << x + sum << endl;
			pq.pop();
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

