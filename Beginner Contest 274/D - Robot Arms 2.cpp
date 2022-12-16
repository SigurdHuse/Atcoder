#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

constexpr int M = 10000;
int n, x, y, A[1010], buf1[2 * M + 1], buf2[2 * M + 1], buf3[2 * M + 1];

void solve(){
	cin >> n >> x >> y;
	
	// Bool indicates if horizontal of vertical
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
	}
	
	int *dp1 = buf1 + M, *dp2 = buf2 +M, *dp3 = buf3 +M;
	
	dp1[v[0]] = dp2[0] = true;
	
	for(int i = 1; i < n; ++i){
		for(int j = -M; j <= M; ++j) dp3[j] = 0;
		int a = v[i];
		if(i % 2 == 0){
			for(int j = -M; j<= M; ++j){
				dp3[j + a] |= dp1[j], dp3[j] |= dp1[j+a];
			}
			swap(dp1, dp3);
		}
		else{
			for(int j = -M; j <= M - a; ++j){
				dp3[j+a] |= dp2[j], dp3[j] |= dp2[j+a];
			}
			swap(dp2, dp3);
		}
	}
	cout <<(dp1[x] and dp2[y] ? "Yes" : "No") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

