#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll a, n, ans = 0; cin >> a >> n;
	ll tmp = n, mx = 100;
	while(tmp){
		mx *= 10;
		tmp /= 10;
	}
	set<ll> mem;
	queue<ll> q;
	q.push(1);
	while(!q.empty()){
		int cur = q.size();
		REP(j,cur){
			ll i = q.front();
			q.pop();
			tmp = i*a;
			if(i == n){
				cout << ans << endl;
				return;
			}
			if(tmp < mx && !mem.count(tmp)){
				q.push(tmp);
				mem.insert(tmp);
			}
			if(i % 10 != 0 && i > 10){
				string s = to_string(i);
				int len = s.size();
				swap(s[0], s[len - 1]);
				tmp = stoi(s);
				if(tmp < mx && !mem.count(tmp)){
					q.push(tmp);
					mem.insert(tmp);
				}
			}
		}
		//cout << ans << endl;
		ans++;
	}
	cout << -1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

