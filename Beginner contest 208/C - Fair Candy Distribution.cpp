#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct person{
	ll candies = 0;
	int a, pos;
};

bool myfunc1(person p1, person p2){
	return p1.a < p2.a;
}

bool myfunc2(person p1, person p2){
	return p1.pos < p2.pos;
}

void solve(){
	ll n, k; cin >> n >> k;
	vector<person> v(n);
	REP(i,n){
		cin >>v[i].a;
		v[i].pos = i;
	}
	sort(all(v), myfunc1);
	REP(i,n) v[i].candies = k/n;
	k %= n;
	while(k > 0){
		v[k-1].candies++;
		k--;
	}
	sort(all(v), myfunc2);
	for(auto i : v) cout << i.candies << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

