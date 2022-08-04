#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll compute_sum(vector<ll> &v){
	ll ans = 0;
	for(int i = 0; i < 9; ++i){
		ans += (i + 1) * pow(10, v[i]);
	}
	return ans;
}

void solve(){
	int k; cin >> k;
	string s, t; cin >> s >> t;
	long double win = 0;
	int one, two;
	vector<ll> cnt1(9), cnt2(9), total(9, k);
	
	for(int i = 0; i < 4; ++i){
		cnt1[s[i] - '1']++;
		total[s[i] - '1']--;
	}
	for(int i = 0; i < 4; ++i){
		cnt2[t[i] - '1']++;
		total[t[i] - '1']--;
	}
	
	// We check given a number how many are winning
	for(int i = 0; i < 9; ++i){
		vector<ll> tmp = total, ccnt1 = cnt1, ccnt2 = cnt2;
		ccnt1[i]++;
		for(int j = 0; j < 9; ++j){
			ccnt2[j]++;
			one = compute_sum(ccnt1);
			two = compute_sum(ccnt2);
			ccnt2[j]--;
			if(two < one){
				win += tmp[i]*(tmp[j] - (i==j));
			}
		}
	}
	//vector<int> test = {2,0,0,2,0,0,0,0,1};
	//cout << compute_sum(test) << endl;
	cout << setprecision(32);
	long double rem = 9 * k - 8;
	cout << win / rem / (rem - 1)<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

