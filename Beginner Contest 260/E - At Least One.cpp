#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Count number of occurences
// f(k) is then number of numbers that occur 

void solve(){
	int n,m; cin >> n >> m;
	vector<int> a(n), b(n);
	
	REP(i,n) cin >> a[i] >> b[i];
	
	vector<vector<int>> inv(m+1);
	
	for(int i = 0; i < n; ++i){
		inv[a[i]].push_back(i);
		inv[b[i]].push_back(i);
	}
	
	vector<int> cnt(n), ans(m+3);
	int cnt_zero = n;
	for(int i = 1, j = 1; i <= m;){
		while(j <=m and cnt_zero != 0){
			for(auto& x: inv[j]){
				if(cnt[x] == 0) cnt_zero--;
				cnt[x]++;
			}
			j++;
		}
		if(cnt_zero != 0) break;
		ans[j-i]++,ans[m+1-i+1]--;
		for(auto& x : inv[i]){
			cnt[x]--;
			if(cnt[x] == 0) cnt_zero++;
		}
		i++;
	}
	for(int i = 1; i <=m; ++i){
		ans[i] += ans[i-1];
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

