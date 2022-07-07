#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c, d, e, f, x;
	cin >>a>> b>> c>> d>> e>> f>> x;
	int tak = 0, aok = 0, t1 = 0, t2 = 0;
	while(t1 < x){
		tak += min(a, x - t1)*b;
		t1 += a + c;
	}
	while(t2 < x){
		aok += min(d, x - t2)*e;
		t2 += d + f;
	}
	if(tak < aok) cout << "Aoki" << endl;
	else if(tak > aok) cout << "Takahashi" << endl;
	else cout << "Draw" << endl; 
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

