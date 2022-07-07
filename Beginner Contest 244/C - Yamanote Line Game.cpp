#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, in = 100, last = 0; cin >> n;
	vector<bool> v(2*n+1,1);
	while(in){
		for(int i = last; i< 2*n+1;++i){
			if(v[i]){
				last++;
				v[i] = 0;
				cout << i+1 << endl;
				break;
			}
		}
		cin >> in;
		if(in != 0) v[in-1] = 0;
		cout.flush();
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

