#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, x; cin >> n >> x;
	string s; cin >> s;
	int points = x;
	for(char c : s){
		if(c == 'o') points++;
		else points = max(0, points - 1);
	}
	cout << points << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

