#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 1e6 + 5;

bool prime[N + 10];

void fill_prime(){
	memset(prime, 1, sizeof(prime));
	for(ll i = 4; i <= N; i += 2) prime[i] = 0;
	for(ll i = 3; i <= N; i += 2){
		if(prime[i]){
			for(ll j = i*i; j <= N; j += i) prime[j] = 0;
		}
	}
}

void solve(){
	ll n; cin >> n;
	fill_prime();
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	int ans = 0;
	for(ll i = 2; i * i <= n; i++){
		int t = 0;
		while(n % i == 0){
			t++;
			n /= i;
		}
		for(int j = 1; t - j>= 0; ++j){
			t -= j;
			ans++;
		}
	}
	if(n != 1) ans++;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

