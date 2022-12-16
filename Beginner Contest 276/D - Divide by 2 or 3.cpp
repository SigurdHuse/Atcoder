#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), reduced(n);
	
	vector<int> two(n), three(n);
	
	for(int &a: v) cin >> a;
	
	for(int i = 0; i < n; ++i){
		int tmp = v[i];
		while(tmp % 3 == 0){
			tmp /= 3;
			three[i]++;
		}
		while(tmp % 2 == 0){
			tmp /= 2;
			two[i]++;
		}
		reduced[i] = tmp;
	}
	
	if(!all_of(all(reduced), [reduced](int x){return x == reduced[0]; })){
		cout << -1 << endl;
		return;
	}

	int mi_tr = *min_element(all(three));
	int mi_two = *min_element(all(two));
	
	int ans = 0;
	
	for(int i = 0; i < n; ++i){
		ans += two[i] - mi_two;
		ans += three[i] - mi_tr;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

