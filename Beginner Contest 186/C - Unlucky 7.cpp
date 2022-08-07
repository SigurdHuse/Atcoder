#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int octal(int n){
	string ans = "";
	while(n > 0){
		ans += to_string(n % 8);
		n /= 8;
	}
	reverse(all(ans));
	int start = 0;
	while(ans[start] == '0') start++;
	return stoi(ans.substr(start));
}

bool has_seven(int x){
	while(x > 0){
		if(x % 10 == 7) return 1;
		x /= 10;
	}
	return 0;
}

void solve(){
	int n; cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		if(!has_seven(i) && !has_seven(octal(i))){
			//cout << i << " " << octal(i) << endl;
			ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

