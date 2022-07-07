#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 


void solve(){
	int n; cin >> n;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	// use sliding window and check all possible
	// left to right
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		cnt = 0;
		for(int j = 0; j <6; ++j){
			if(v[i][j] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int j = 6; j < n; ++j){
			if(v[i][j] == '.') cnt--;
			else cnt ++;
			
			if(v[i][j-6] == '#') cnt--;
			if(cnt >= 4){
				cout << "Yes" << endl;
				return;
			}
		}
	}
	// top to bottom
	for(int j = 0; j < n; ++j){
		cnt = 0;
		for(int i = 0; i <6; ++i){
			if(v[i][j] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int i = 6; i < n; ++i){
			if(v[i][j] == '.') cnt--;
			else cnt ++;
			
			if(v[i][j-6] == '#') cnt--;
			if(cnt >= 4){
				cout << "Yes" << endl;
				return;
			}
		}
	}
	// left to right diagonal
	for(int i = 0; i < n; ++i){
		cnt = 0;
		for(int j = 0; j < 6 && j+i < n; ++j){
			if(v[n-1-j][j+i] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int j = 6; j < n && j+i < n; ++j){
			if(v[n-1-j][j+i] == '#') cnt++;
			else cnt--;
			
			if(v[n-1-j+6][j+i-6] == '#') cnt--;
		}
	}
	
	for(int j = 0; j < n; ++j){
		cnt = 0;
		for(int i = 0; i < 6 && j+i < n; ++i){
			if(v[n-1-j][j+i] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int i = 6; i < n && j+i < n; ++i){
			if(v[n-1-j][j+i] == '#') cnt++;
			else cnt--;
			
			if(v[n-1-j+6][j+i-6] == '#') cnt--;
		}
	}
	
	// from right to left diagonal
	for(int i = 0; i < n; ++i){
		cnt = 0;
		for(int j = 0; j < 6 && j+i < n; ++j){
			if(v[j][j+i] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int j = 6; j < n && j+i < n; ++j){
			if(v[j][j+i] == '#') cnt++;
			else cnt--;
			
			if(v[j-6][j+i-6] == '#') cnt--;
		}
	}
	for(int j = 0; j < n; ++j){
		cnt = 0;
		for(int i = 0; i < 6 && j+i < n; ++i){
			if(v[j][j+i] == '#') cnt++;
		}
		if(cnt >= 4){
			cout << "Yes" << endl;
			return;
		}
		for(int i = 6; i < n && j+i < n; ++i){
			if(v[j][j+i] == '#') cnt++;
			else cnt--;
			
			if(v[j-6][j+i-6] == '#') cnt--;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

