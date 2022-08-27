#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Keep track of different coming after
// Then check j - i != k - j;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int R = 0, G = 0, B = 0;
	vector<int> dic(256);
	dic['R'] = 0;
	dic['G'] = 1;
	dic['B'] = 2;
	vector<char> rev(3);
	rev[0] = 'R'; rev[1] = 'G'; rev[2] = 'B';
	vector<vector<int>> cnt(n, vector<int>(3));
	for(int i = n-1; i >= 0; --i){
		if(s[i] == 'R') R++;
		else if(s[i] == 'G') G++;
		else B++;
		cnt[i][0] = R;
		cnt[i][1] = G;
		cnt[i][2] = B;
	}
	ll ans = 0;
	for(int i= 0; i < n; ++i){
		if(cnt[i][0] == 0 || cnt[i][1] == 0 || cnt[i][2] == 0) break;
		char cur = s[i];
		for(int j = i +1; j < n; ++j){
			if(s[j] != cur){
				int third = 3 - dic[cur] - dic[s[j]];
				ans += cnt[j][third];
				if(2*j - i < n && s[2*j - i] == rev[third]){
					//cout << s[i] << " " << s[j] << " " << s[i + j + 1] << endl;
					ans--;
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

