#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Solved using a greedy algorithm 

bool myfunc(pair<int,int> i, pair<int,int> j){
	if(i.first == j.first) return i < j;
	return 0;
}

void solve(){
	int n, d; cin >> n >> d;
	vector<pair<int,int>> v(n);
	REP(i,n){
		cin >> v[i].first >> v[i].second;
	}
	sort(all(v)); // need to sort length with equal start
	sort(all(v), myfunc);
	/*
	for(auto p : v){
		cout << p.first;
		cout << " ";
		cout << p.second << endl;
	}
	*/
	int ans = 0; 
	for(int i = 0; i < n; ++i){
		if(v[i].first != -1){
			ans++;
			for(int j = i; j < n; ++j){
				if(v[j].first <= v[i].second + d){
					v[j].first = -1;
				}
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

