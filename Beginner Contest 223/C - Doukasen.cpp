#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	double l = 0, r = 0;
	vector<pair<double>> v(n);
	for(auto &[a,b] : v){
		cin >> a >> b;
		r += a;
	}
	int indx1 = 0, indx2 = n-1;
	while(indx1 <= indx2){
		if(v[indx1].first == 0) indx1++;
		if(v[indx2].first == 0) indx2++;
		
		if(r - l <= v[indx1].second + v[indx2].second){
			
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

