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
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	
	set<char> first = {'H', 'D', 'C', 'S'};
	
	set<char> second = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	
	set<string> seen;
	
	for(auto h : v){
		if(!first.count(h[0]) || !second.count(h[1]) || seen.count(h)){
			cout << "No" << endl;
			return;
		}
		seen.insert(h);
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

