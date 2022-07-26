#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// Want to match points parallele to x-axis
// and to y-axis, and then match these.
// Faster than O(N^4)

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[a,b]: v) cin>> a >> b;
	
	vector<pair<int,int>> xaxis, yaxis;
	
	for(int i = 0; i < n; ++i){
		for(int j = i + 1; j < n; ++j){
			if(v[i].second == v[j].second){
				xaxis.push_back({i,j});
			}
			else if(v[i].first == v[j].second){
				yaxis.push_back({i,j});
			}
		}
	}
	
	ll ans = 0;
	int xn = xaxis.size(), yn = yaxis.size();
	for(int i = 0; i<xn; ++i){
		for(int j = i+ 1; j < xn; ++j){
			// y1 is the same for both points
			// so we need to check that y-value is not the same
			int y1 = v[xaxis[i].first].second;
			int y2 = v[xaxis[j].first].second;
			
			if(y1 != y2){
				if(xaxis[i].first != xaxis[j].first && xaxis[i].first != xaxis[j].second){
					if(xaxis[i].second != xaxis[j].first && xaxis[i].second != xaxis[j].second){
						cout << xaxis[i].first << " " << xaxis[j].first << endl;
						cout << xaxis[j].first << " " << xaxis[j].first << endl;
						cout << endl;
						ans++;
					}
				}
			}
		}
	}
	
	for(int i = 0; i<yn; ++i){
		for(int j = i+ 1; j < yn; ++j){
			int x1 = v[yaxis[i].first].first, x2 = v[yaxis[j].first].first;
			if(x1 != x2) ans ++;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

