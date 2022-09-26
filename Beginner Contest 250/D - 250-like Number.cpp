#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 1e6 + 1;

bool prime[N+1];

void fill_prime(){
	memset(prime, 1, sizeof(prime));
	for(int i = 4; i <= N; i+=2) prime[i] = 0;
	for(ll i = 3; i*i <= N; i += 2){
		if(prime[i]){
			for(ll j = i*i; j <= N; j += i) prime[j] = 0;
		}
	}
}

ll f(ll p, ll q){
	double est = 1;
	est = q*q*q;
	est *= p;
	if(est > 4e18){ return 4e18;}
	return p*q*q*q;
}

void solve(){
	fill_prime();
	vector<ll> primes = {2};
	for(ll i = 3; i <= N; i += 2){
		if(prime[i]) primes.push_back(i);
	}
	ll n, sz = SZ(primes); cin >> n;
	ll res = 0;
	int q = sz - 1;
	for(int p = 0; p < sz; ++p){
		while(p < q && f(primes[p], primes[q]) > n){q--;}
		if(p >= q) break;
		res += (q - p);
	}
	cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

