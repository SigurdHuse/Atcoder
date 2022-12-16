#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int q; cin >> q;
	multiset<int> s;
	int type, c, x; 
	
	while(q--){
		cin >> type;
		if(type == 1){
			cin >> x;
			s.insert(x);
		}
		else if(type == 2){
			cin >> x >> c;
			while(c--){
				auto it = s.find(x);
				if(it != s.end()) s.erase(it);
				else break;
			}
		}
		else{
			cout << *(--s.end()) - *s.begin() << endl;
		}
		//if(s.size() > 0)cout << "mx: " << *(--s.end()) << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

