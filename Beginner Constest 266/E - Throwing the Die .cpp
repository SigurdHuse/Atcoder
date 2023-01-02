#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Will simulate
// If we throw under 4 or
// If 5 and at least 6 turns left continue
// If 4 and at least 3 turns left conitnue 

void solve(){
	int n; cin >> n;
	n--;
	vector<long double> state(6);
	REP(i,6) state[i] = 1.0/6;
	
	for(int round = 0; round < n; ++round){
		vector<long double> next_state(6);
		for(int i = 0; i <3; ++i){
			for(int k = 0; k < 6; ++k){
				next_state[k] += state[i] / 6;
			}
		}
		if(n - round >= 2){
			for(int k = 0; k < 6; ++k){
				next_state[k] += state[3] / 6;
			}
		}
		else next_state[3] += state[3];
		
		if(n - round >= 5){
			for(int k = 0; k < 6; ++k){
				next_state[k] += state[4] / 6;
			}
		}
		else next_state[4] += state[4];
		
		next_state[5] += state[5];
		
		state = next_state;
		//for(auto x : state) cout << x<< " ";
		//cout << endl;
	}
	//for(auto x : state) cout << x<< " ";
	//cout << endl;
	long double val = 0;
	for(int i = 0; i < 6; ++i){
		val += state[i] * (i + 1);
	}
	cout <<setprecision(16) << val << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

