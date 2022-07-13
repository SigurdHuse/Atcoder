#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Find all current points and sort them to find the limit for top k
// We then go through and check if each student can reach this theoretical limit

struct student{
	int one, two ,thr;
};

void solve(){
	int n, k; cin >> n >> k;
	vector<student> v(n);
	vector<int> cur(n), top(n);
	REP(i,n) cin >> v[i].one >> v[i].two >> v[i].thr;
	REP(i,n){
		int s = v[i].one + v[i].two + v[i].thr;
		cur[i] = s; top[i] = s;
	}
	sort(all(top), greater<int>());
	int goal = top[k-1];
	REP(i, n){
		if(cur[i] + 300 >= goal) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

