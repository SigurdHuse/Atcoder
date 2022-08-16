#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We need to find if any segment exceeds w

ll cum[200010];

void solve(){
	int n, W; cin >> n >> W;
	for(int i =0; i < n; ++i){
		int s, t, w;
		cin >> s >> t >> w;
		cum[s] += w;
		cum[t] -= w;
	}
	for(int i = 0; i < 200005; ++i){
		cum[i+1] += cum[i];
		if(cum[i] > W){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

