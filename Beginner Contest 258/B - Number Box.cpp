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
	ll ans = 0;
	int n; cin >> n;
	vector<string> v(n);
	for(auto &a : v) cin >> a;
	
	
	// Up and down
	for(int y = 0; y < n; ++y){
		string cur = "";
		for(int x = 0; x < n; ++x){
			cur += v[y][x];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	
	// Left and right
	for(int x = 0; x < n; ++x){
		string cur = "";
		for(int y = 0; y < n; ++y){
			cur += v[y][x];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	// Down digaonal right
	for(int start_x = 0; start_x < n; start_x++){
		string cur = "";
		for(int y = 0, x = start_x; y < n; ++y, ++x){
			cur += v[y][x % n];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	// Down diagonal left
	for(int start_y = 0; start_y < n; start_y++){
		string cur = "";
		for(int y = start_y, x = 0; x < n; ++y, ++x){
			cur += v[y%n][x];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	
	// Down digaonal right
	for(int start_x = 0; start_x < n; start_x++){
		string cur = "";
		for(int y = n-1, x = start_x; y >= 0; --y, --x){
			cur += v[(y+n)%n][(x +n) % n];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	// Down diagonal left
	for(int start_y = 0; start_y < n; start_y++){
		string cur = "";
		for(int y = start_y, x = n-1; x >= 0; --y, --x){
			cur += v[(y +n)%n][(x+n)%n];
		}
		ans = max(ans, stoll(cur));
		for(int i = 0; i < n; ++i){
			char tmp = cur.back();
			cur.pop_back();
			cur = tmp + cur;
			ans = max(ans, stoll(cur));
		}
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

