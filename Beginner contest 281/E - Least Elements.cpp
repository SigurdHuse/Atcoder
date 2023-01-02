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
	int n,m, k; cin >> n >> m >> k;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	if(m == n){
		cout << accumulate(all(v), 0ll) << endl;
		return;
	}
	
	if(k == m){
		ll a = 0;
		for(int i = 0; i < k; ++i) a += v[i];
		cout << a << " ";
		for(int i = k; i < n; ++i){
			a += v[i];
			a -= v[i-k];
			cout << a << " ";
		}
		cout << endl;
		return;
	}
	
	vector<int> tmp(v.begin(), v.begin() + m);
	
	multiset<int> min, extra;
	sort(all(tmp));
		
	ll ans = 0;
	
	for(int i = 0; i < k; ++i){
		min.insert(tmp[i]);
		ans += tmp[i];
	}
	for(int i = k; i < m; ++i){
		extra.insert(tmp[i]);
	}
	cout << ans << " ";
	
	for(int i = m; i < n; ++i){
		auto it1 = min.find(v[i-m]);
		if(it1 == min.end()){
			it1 = extra.find(v[i-m]);
			extra.erase(it1);
		}
		else{
			min.erase(it1);
			ans -= v[i-m];
			auto it2 = extra.begin();
			if(v[i] < *(it2)){
				ans += v[i];
				min.insert(v[i]);
			}
			else{
				ans += *it2;
				min.insert(*it2);
				extra.erase(it2);
				extra.insert(v[i]);
			}
			cout << ans << " ";
			continue;
		}
		
		//cout << "Here" << endl;
		auto it3 = min.end();
		it3--;
		if(v[i] < *it3){
			ans -= *it3;
			ans += v[i];
			extra.insert(*it3);
			min.erase(it3);
			min.insert(v[i]);
		}
		else extra.insert(v[i]);
		cout << ans << " ";
		
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

