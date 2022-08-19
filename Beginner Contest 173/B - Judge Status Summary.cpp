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
	vector<int> cnt(4);
	string s;
	REP(i,n){
		cin >> s;
		if(s == "AC") cnt[0]++;
		if(s == "WA") cnt[1]++;
		if(s == "TLE") cnt[2]++;
		if(s == "RE") cnt[3]++;
	}
	cout << "AC x " << cnt[0] << endl;
	cout << "WA x " << cnt[1] << endl;
	cout << "TLE x " << cnt[2] << endl;
	cout << "RE x " << cnt[3] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

