#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Brute force

int n, m, q; 

vector<vector<int>> perm;

void generate(vector<int> cur, int last){
	if(SZ(cur) == n){
		perm.push_back(cur);
		return;
	}
	for(int i = 1; i <= m; ++i){
		if(i >= last){
			vector<int> tmp = cur;
			tmp.push_back(i);
			generate(tmp, i);
		}
	}
}


void solve(){
	cin >> n >> m >> q;
	vector<pair<int,int>> score(q);
	vector<int> a(q), b(q);
	REP(i,q){
		cin >> a[i] >> b[i];
		cin >> score[i].f >> score[i].s;
	}
	for(int i = 1; i <= m; ++i) generate({i}, i);
	int ans = 0;
	for(auto v : perm){
		int cnt = 0;
		REP(i,q){
			cnt += score[i].s * ((v[b[i]-1] - v[a[i]-1]) == score[i].f);
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

