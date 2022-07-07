#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k; 
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	priority_queue<int,vector<int>, greater<int>> q(v.begin(),v.begin()+k);
	cout << q.top() << endl;
	for(int i = k; i <n; ++i){
		if(q.top() < v[i]){
			q.pop();
			q.push(v[i]);
		}
		cout << q.top() << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

