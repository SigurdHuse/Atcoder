#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	map<int,string> vals;
	for(int i = 0; i < 10; ++i){
		vals[i] = to_string(i);
	}
	vals[10] = "A";
	vals[11] = "B";
	vals[12] = "C";
	vals[13] = "D";
	vals[14] = "E";
	vals[15] = "F";
	
	int n; cin >> n;
	
	string ans = "";
	for(int i = 15; i >= 0; --i){
		if(i * 16 <= n){
			ans += vals[i];
			n -= i*16;
			break;
		}
	}
	for(int i = 15; i>= 0; --i){
		if(i <= n){
			ans += vals[i];
			break;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

