#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// brute force
// most we can have is 10 characters
// Need all permutations of unique characters

unordered_map<char,int> mp;

ll f(string t, vector<int> &q){
	if(q[mp[t[0]]] == 0) return -1;
	int n = t.length();
	ll ans = 0;
	REP(i,n){
		ans *= 10;
		ans += q[mp[t[i]]];
	}
	return ans;
}

void solve(){
	int cnt = 0;
	string s[3];
	REP(i,3){
		cin >> s[i];
		for(char c : s[i]){
			if(mp.find(c) == mp.end()){
				mp[c] = cnt;
				++cnt;
			}
		}
	}
	
	if(cnt > 10){
		cout << "UNSOLVABLE" << endl;
		return;
	}
	
	vector<int> p(10);
	REP(i, 10) p[i] = i;
	sort(all(p));
	
	do{
		ll x = f(s[0], p);
		ll y = f(s[1], p);
		ll z = f(s[2], p);
		if(x == -1 || y == -1 || z == -1) continue;
		if(x + y == z){
			cout << x << endl;
			cout << y << endl;
			cout << z << endl;
			return;
		}
	}
	while(next_permutation(all(p)));
	cout << "UNSOLVABLE" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

