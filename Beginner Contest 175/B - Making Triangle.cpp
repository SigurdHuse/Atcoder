#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

bool is_triangle(int l1, int l2, int l3){
	if(l3 >= l1 + l2) return 0;
	if(l3 <= max(l1,l2) - min(l1,l2)) return 0;
	return 1;
}

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &l : v) cin >> l;
	int ans = 0;
	for(int i = 0; i < n; ++i){
		for(int j = i +1; j < n; ++j){
			for(int k = j + 1; k < n; ++k){
				if(is_triangle(v[i],v[j], v[k])){
					//cout << i+1 <<" " <<j+1 << " " << k+1 << endl;
					if(v[i] != v[j] && v[i] != v[k] && v[j] != v[k])ans++;
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

