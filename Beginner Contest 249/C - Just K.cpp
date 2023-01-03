#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to choose at least k strings

struct Node{
	vector<string> vals;
	int idx;
};

void solve(){
	int n, k; cin >> n >> k;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	queue<Node> q;
	Node tmp;
	tmp.idx = 0;
	int ans = 0;
	q.push({});
	while(q.size()){
		
		Node cur = q.front(); q.pop();
		
		//for(string s : cur.vals) cout << s << " ";
		//cout << endl;
		
		if(cur.idx == n+1) continue;
		
		if(SZ(cur.vals) >= k){
			vector<int> alf(26);
			for(string s : cur.vals){
				for(char c : s) alf[c - 'a']++;
			}
			int cnt = 0;
			for(int i = 0; i < 26; ++i){
				if(alf[i] == k) cnt++;
			}
			//for(int i : alf) cout << i << " ";
			//cout << endl;
			ans = max(ans, cnt);
		}
		for(int i = cur.idx; i < n; ++i){
			tmp = cur;
			tmp.idx = i+1;
			tmp.vals.push_back(v[i]);
			q.push(tmp);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

