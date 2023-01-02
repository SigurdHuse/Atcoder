#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

long double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164;
long double CONV = 180.0;


long double angle(long double x, long double y, long double x1, long double y1, long double x2, long double y2){
	pair<long double, long double> vec1, vec2;
	vec1.f = x1 - x;
	vec1.s = y1 - y;
	
	vec2.f = x2 - x;
	vec2.s = y2 - y;
	
	long double dot = vec1.f * vec2.f + vec1.s * vec2.s;
	long double dis1 = sqrt(vec1.f*vec1.f + vec1.s*vec1.s);
	long double dis2 = sqrt(vec2.f*vec2.f + vec2.s*vec2.s);
	
	
	return CONV*acos(dot / dis1 / dis2) / PI;
}

void solve(){
	vector<pair<long double,long double>> v(4);
	for(auto &[x,y] : v) cin >> x >> y;
	vector<long double> angles(4);
	long double cur;
	// AB AD
	cur = angle(v[0].f, v[0].s, v[1].f,v[1].s,v[3].f,v[3].s);
	if(v[1].f < v[0].f){
		cur = 360.0 - cur;
	}
	angles[0] = cur;
	// CB CD
	cur = angle(v[2].f, v[2].s, v[1].f,v[1].s,v[3].f,v[3].s);
	if(v[1].f > v[0].f){
		cur = 360.0 - cur;
	}
	angles[1] = 360.0 - cur;
	// BC BA
	cur = angle(v[1].f, v[1].s, v[2].f,v[2].s,v[0].f,v[0].s);
	if(v[2].s > v[3].s){
		cur = 360.0 - cur;
	}
	angles[2] = cur;
	// DC DC
	cur = angle(v[3].f, v[3].s, v[0].f,v[0].s,v[2].f,v[2].s);
	if(v[2].s < v[3].s){
		cur = 360.0 - cur;
	}
	angles[3] = cur;
	
	for(auto i : angles){
		if(i > 90.0){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

