#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int N = 200100;

ll t[N];
int k[N];
vector<int> e[N];

bool used[N];

void solve(){
	int n,x; cin >> n;
	ll ans = 0;
	REP(i,N) used[i] = false;
	
	REP(i,n){
		cin>>t[i] >> k[i];
		REP(j, k[i]){
			cin >> x;
			e[i].push_back(x-1);
		}
	}
	
	used[n-1] = true;
	
	for(int i = n-1; i >= 0; --i){
		if(used[i]){
			ans += t[i];
			REP(j,k[i]){
				used[e[i][j]] = true;
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










