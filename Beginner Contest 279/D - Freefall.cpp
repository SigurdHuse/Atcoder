#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

ll n, m; 
double ans;

double f(ll val){
	ll c = val + 1ll;
	double p = sqrt(c);
	
	p = n / p;
	p += (m*val);
	
	return p;
}

void solve(){
	cin >> n >> m;
	
	ll left = 0, right = n / m;
	
	while(left < right){
		ll mid1 = left + (right - left)/3ll;
		ll mid2 = right - (right - left)/3ll;
		
		double f1 = f(mid1);
		double f2 = f(mid2);
		
		if(f1 < f2) right = mid2 - 1;
		else if(f1 > f2) left = mid1 + 1;
		else{
			left = mid1 + 1;
			right = mid2 - 1;
		}
	}
	
	
	cout << setprecision(32) << f(right) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

