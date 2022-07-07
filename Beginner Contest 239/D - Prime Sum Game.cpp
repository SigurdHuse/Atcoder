#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

vector<bool> primes(201,1);

void fill_primes(){
	for(int i = 4; i < 201; i += 2) primes[i] = 0;
	for(int i = 3; i < 201; i += 2){
		if(primes[i]){
			for(int j = i*i; j < 201; j+=i){
				primes[j] = 0;
			}
		}
	}	
}

void solve(){
	int a, b, c, d; cin >> a>> b >> c >> d;
	bool no_prime;
	for(int i = a; i <= b; ++i){
		no_prime = 1;
		for(int j = c; j <= d; ++j){
			if(primes[i+j]){
				no_prime = 0;
				break;
			}
		}
		if(no_prime){
			cout << "Takahashi" << endl;
			return;
		}
	}
	cout <<  "Aoki" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	fill_primes();
	solve();
}

