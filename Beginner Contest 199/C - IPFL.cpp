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
	string s, s1, s2; cin >> s;
	s1 = s.substr(0,n); s2 = s.substr(n,n);
	int q, a, b, t; cin >> q;
	
	REP(i,q){
		cin >> t >> a >> b;;
		if(t == 1){
			a--; b--;
			if(a >= n){
				if(b >= n){
					swap(s2[a-n], s2[b-n]);
				}
				else{
					swap(s2[a-n], s1[b]);
				}
			}
			else{
				if(b >= n){
					swap(s1[a], s2[b-n]);
				}
				else{
					swap(s1[a], s1[b]);
				}
			}
		}
		else{
			swap(s1, s2);
		}
	}
	cout << s1 << s2 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

