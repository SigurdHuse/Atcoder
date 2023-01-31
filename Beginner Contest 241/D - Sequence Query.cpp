#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

ll q, x, k;

typedef std::multiset<ll>::iterator It;

void solve(){
	cin >> q;
	int t;
	
	multiset<ll> mem;
	
	while(q--){
		cin >> t;
		bool ok = 1;
		if(t == 1){
			cin >> x;
			mem.insert(x);
		}
		else if(t == 2){
			cin >> x >> k;
			auto it = mem.upper_bound(x);
			
			while(k > 0){
				if(it == mem.begin()){
					ok = 0;
					break;
				}
				k--;
				it--;
				
			}
			cout << (k == 0 && ok ? *it : -1) << endl;
		}
		else if(t == 3){
			cin >> x >> k;
			auto it = mem.lower_bound(x);
			k--;
			while(k > 0 && it != mem.end()){
				k--;
				it++;
			}
			cout << (it != mem.end() ? *it : -1) << endl;
		}
	}
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

