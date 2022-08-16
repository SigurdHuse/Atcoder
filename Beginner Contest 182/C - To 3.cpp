#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We only need to look at sum of digits to check if multiple of 3

void solve(){
	ll n; cin >> n;
	vector<int> cnt(3);
	int s = 0, len = 0;
	while(n > 0){
		cnt[n % 10 % 3]++;
		s += n % 10;
		n /= 10;
		len++;
	}
	if(s % 3 == 0) cout << 0 << endl;
	else if(s % 3 == 1){
		if(cnt[i] == 0){
			cout << 2 << endl;
			
		}
		else cout << 1 << endl;
	}
	else{
		if(cnt[2] == 0 && cnt[5] == 0 && cnt[8] == 0) cout << 2 << endl;
		else cout << 1 << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

