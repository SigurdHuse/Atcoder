#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Multiple of 8 is dividible of 2 and 4

void solve(){
	string s; cin >> s;
	if(s.size() == 1){
		cout << (s == "8" ? "Yes" : "No") << endl;
		return;
	}
	if(s.size() == 2){
		if(stoi(s) % 8 == 0){
			cout << "Yes" << endl;
			return;
		}
		swap(s[0], s[1]);
		cout << (stoi(s) % 8 == 0 ? "Yes" : "No") << endl;
		return;
	}
	
	vector<int> cnt(10);
	for(char x : s) cnt[x - '0']++;
	for(int i = 112; i < 1000; i += 8){
		auto c = cnt;
		string tmp = to_string(i);
		for(char x : to_string(i)) c[x - '0']--;
		if(all_of(all(c), [](int x){return x >= 0;})){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

