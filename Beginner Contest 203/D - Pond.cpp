#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Sliding window

int find_median(vector<int> v){
	int n = v.size();
	sort(all(v));
	if(n == 1) return v[0];
	if(n % 2) return v[n/2];
	else return v[n/2-1]; 
}

void print(vector<int> &v){
	for(int i : v) cout << i <<  " ";
	cout << endl;
}

void solve(){
	int n, k; cin >> n >> k;
	vector<vector<int>> park(n, vector<int>(n));
	REP(i,n) REP(j,n) cin >> park[i][j];
	int ans = INT_MAX;
	
	// We go from the upper left square
	// Then sliding window over the next col
	vector<int> v(k*k);
	for(int start = 0; start < n - k + 1; ++start){
		for(int width = 0; width < n- k + 1; ++width){
			int indx = 0;
			for(int i = start; i < start + k; ++i){
				for(int j = width; j < width + k; ++j){
					v[indx] = park[i][j];
					indx++;
				}
			}
			//print(v);
			ans = min(ans, find_median(v));
			indx = 0;
			for(int i = start + k; i < n - k; ++i){
				for(int j = width; j < width + k; ++j){
					v[indx] = park[j][i];
					indx++;
				}
				//print(v);
				ans = min(ans, find_median(v));
				if(indx == k*k) indx = 0;
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

