#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 10000005;

bool prime[N];

void fill_prime(){
	memset(prime, 1, N);
	for(int i = 4; i < N; i += 2) prime[i] = 0;
	for(int i = 3; i*i < N; i += 2){
		if(prime[i]){
			for(int j = i*i; j < N; j += i) prime[j] = 0;
		}
	}
}

void solve(){
	int n; cin >> n;
	fill_prime();
	vector<ll> v(N);
	for(int i = 1; i < N; ++i){
		for(int j = i; j < N; j += i){
			v[j]++;
		}
	}
	
	ll s= 0;
	for(int k = 1; k <= n; ++k){
		//cout << k << " " << v[k] << endl;
		s += 1ll * k * v[k];
	}
	cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

