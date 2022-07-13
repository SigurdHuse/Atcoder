#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

const int SIZE = 1 << 20;
const int MASK = SIZE - 1;

void solve(){
	int q; cin >> q;
	map<int,int> interval;
	map<int,ll> map;
	interval[SIZE] = 0;
	while(q--){
		int t; ll x;
		cin >> t>> x;
		if(t == 1){
			int i = x & MASK;
			auto itr = interval.upper_bound(i);
			if(itr == end(interval)){
				i = 0;
				itr = begin(interval);
			}
			if(itr -> second <= i){
				map[i] = x;
				int l1 = itr->second, r1 = i, l2 = i+1, r2 = itr->first;
				interval.erase(itr);
				if(l1 != r1) interval[r1] = l1;
				if(l2 != r2) interval[r2] = l2;
			}
			else{
				map[itr->second] = x;
				itr-> second += 1;
				if(itr->first == itr->second){
					interval.erase(itr);
				}
			}
		}
		else{
			auto itr = map.find(x & MASK);
			cout << (itr == end(map) ? -1 : itr->second) << endl;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

