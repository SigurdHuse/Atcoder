#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// We use a sliding window that count number of "."
// If we have to many we move left pointer until we find
// A "." and we remove it from the window, the answer is the longest distance between two pointers

void solve(){
	string s; cin >> s;
	int k; cin >> k;
	int ans = 0;
	int r = 0, l = 0, n = s.size(); 
	while(r < n){
		//cout << l << " " << r << endl;
		if(s[r] == '.'){
			while(k == 0){
				if(s[l] == '.'){
					k++;
				}
				l++;
			}
			k--;
		}
		r++;
		ans = max(ans,r-l);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

