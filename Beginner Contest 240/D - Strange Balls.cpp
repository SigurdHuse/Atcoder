#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n,a; cin >> n;
	int cnt = 0, cur = -1, total = 0;
	deque<pair<int,int>> q;
	//q.push({-1,0});
	REP(i,n){
		total ++;
		cin >> a;
		if(a == cur) cnt++;
		else{
			q.push_back({cur, cnt});
			cur = a;
			cnt = 1;
		}
		if(cnt == cur){
			total -= cur;
			cnt = q.back().second;
			cur = q.back().first;
			q.pop_back();
		}
		//cout << total <<" " << cur<<" " << cnt <<endl;
		cout << total << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

