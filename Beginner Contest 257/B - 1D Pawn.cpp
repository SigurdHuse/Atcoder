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
	int n, k, q; cin >> n >> k >> q;
	vector<bool> board(n);
	int a, l;
	for(int i = 0; i< k; ++i){
		cin >> a;
		a--;
		board[a] = 1;
	}
	
	while(q--){
		cin >> l;
		int cnt = 0, idx = 0;
		for(;idx < n; ++idx){
			if(board[idx]){
				cnt++;
				if(cnt == l) break;
			}
		}
		if(idx == n-1 || board[idx + 1]){
			continue;
		}
		board[idx + 1] = 1;
		board[idx] = 0;
	}
	for(int i = 0; i < n; ++i){
		if(board[i]) cout << i + 1 << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

