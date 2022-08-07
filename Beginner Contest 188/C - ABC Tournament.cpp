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
	vector<pair<int,int>> v(pow(2,n));
	REP(i, pow(2,n)) cin>> v[i].f;
	REP(i, pow(2,n)) v[i].s = i+1;
	 
	while(SZ(v) > 2){
		vector<pair<int,int>> tmp;
		int n1 = SZ(v);
		for(int i = 0; i <n1; i += 2){
			if(v[i].f > v[i+1].f) tmp.push_back(v[i]);
			else tmp.push_back(v[i+1]);
		}
		v = tmp;
	}
	sort(all(v));
	cout << v[0].s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

