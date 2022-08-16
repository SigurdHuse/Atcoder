#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Each time we either draw a or not a
// with P(a) = a/(a+b+c) P(!a) = (b+c)/(a+b+c)

double dp[101][101][101];

double f(int a, int b, int c){
	if(dp[a][b][c]) return dp[a][b][c];
	if(a == 100 || b == 100 || c == 100) return 0;
	double ans = 0;
	ans += (f(a+1, b, c) + 1) * a/(a+b+c);
	ans += (f(a, b+1, c) + 1) * b/(a+b+c);
	ans += (f(a, b, c+1) + 1) * c/(a+b+c);
	dp[a][b][c] = ans;
	return ans;
}

void solve(){
	int a, b, c; cin >> a >> b >> c;
	cout << setprecision(16);
	cout << f(a,b,c) << endl;	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

