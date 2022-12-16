#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll s[200005];

void solve(){
	int n, m; cin >> n >> m;
	
	map<int,int> mp;
	
	ll hand = 0;
	int a;
	for(int i =0 ; i < n; ++i){
		cin >> a;
		mp[a]++;
		hand += a;
	}

	vector<pair<ll,ll>> vec;
	
	for(auto p: mp) vec.push_back(p);
	int k = vec.size();
	
	if(k == m){
		cout << 0 << endl;
		return;
	}
	int p;
	
	for(int i = 0; i < k; ++i){
		if(vec[(i+1)%k].first != (vec[i].first)%m){
			p = i;
			break;
		}
	}
	
	for(int i = 0; i < k; ++i){
		int j = (p - i + k)%k;
		s[j] = hand;
		
		if(vec[(j+1)%k].first == (vec[j].first+1)%m) s[j] = s[(j+1)%k];
		s[j] -= vec[j].first * vec[j].second;
	}
	
	ll ans = hand;
	for(int i = 0; i < k; ++i) ans = min(ans, s[i]);
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

