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
	vector<int> v(n);
	map<int,int> mem;
	for(auto &a : v){
		cin >> a;
		mem[a]++;
	}
	ll cnt = 0;
	for(int i= 1; i < n; ++i) cnt += abs(v[0] - v[i]);
	ll ans = cnt;
	mem[v[0]]--;
	if(mem[v[0]] == 0) mem.erase(v[0]);
	for(int i = 1; i < n-1; ++i){
		ll diff = abs(v[i] - v[i-1]);
		int under = distance(mem.find(v[i]),mem.begin());
		int over = SZ(mem) - under - mem[v[i]];
		mem[v[i]]--;
		cnt -= diff;
		if(v[i] <= v[i-1]){
			cnt -= over*diff;
			cnt += under*diff;
		}
		else{
			cnt -= under*diff;
			cnt += over*diff;
		}
		ans += cnt;
		cout << v[i] <<" " << under << " " << over << endl;
		if(mem[v[i]] == 0) mem.erase(v[i]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

