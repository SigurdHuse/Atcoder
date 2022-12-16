#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void print(vector<int> &v){
	for(int i : v) cout << i << " ";
	cout << endl;
}

void solve(){
	int n; cin >> n;
	cout << 1 << endl;
	if(n == 1) return;
	vector<int> cur = {1,1};
	print(cur);
	for(int i = 0; i < n-2; ++i){
		vector<int> next(i+3,1);
		for(int j = 1; j < i+2; ++j){
			next[j] = cur[j-1] + cur[j];
		}
		print(next);
		cur = next;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

