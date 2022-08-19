#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Pure brute force problem, we simulate all possible permutations of row and col choices
// Could probably find a more efficent method of determining the number of black squares 

int h, w; 

vector<vector<int>> col_perm, row_perm;

void fill_col(vector<int> cur, vector<int> &pos1){
	col_perm.push_back(cur);
	for(int i : pos1){
		if(i > cur.back()){
			vector<int> tmp = cur;
			tmp.push_back(i);
			fill_col(tmp, pos1);
		}
	}
}

void fill_row(vector<int> cur, vector<int> &pos2){
	row_perm.push_back(cur);
	for(int i : pos2){
		if(i > cur.back()){
			vector<int> tmp = cur;
			tmp.push_back(i);
			fill_row(tmp, pos2);
		}
	}
}


void fill_red_row(vector<string> &v, vector<int> &pos){
	for(int i : pos){
		for(int j = 0; j < w; ++j) v[i][j] = '.';
	}
}

void fill_red_col(vector<string> &v, vector<int> &pos){
	for(int i : pos){
		for(int j = 0; j < h; ++j) v[j][i] = '.';
	}
}

void solve(){
	cin >> h >> w;
	int k; cin >> k;
	vector<string> v(h);
	for(auto &a : v) cin >> a;
	vector<int> pos1(h), pos2(w);
	REP(i,h) pos1[i] = i;
	REP(i,w) pos2[i] = i;
	REP(i,h) fill_row({i}, pos1);
	REP(i,w) fill_col({i}, pos2);
	
	int cnt = 0;
	REP(i,h) REP(j,w) cnt += v[i][j] == '#';
	int ans = cnt == k;
	
	/*
	for(auto p : col_perm){
		for(int i : p) cout << i << " ";
		cout << endl;
	}
	*/
	for(auto pos : col_perm){
		vector<string> tmp = v;
		cnt = 0;
		fill_red_col(tmp,pos);
		REP(i,h) REP(j,w) cnt += tmp[i][j] == '#';
		ans += cnt == k;
	}
	
	for(auto pos : row_perm){
		vector<string> tmp = v;
		cnt = 0;
		fill_red_row(tmp,pos);
		REP(i,h) REP(j,w) cnt += tmp[i][j] == '#';
		ans += cnt == k;
	}
	
	for(auto v1 : row_perm){
		for(auto v2 : col_perm){
			cnt = 0;
			vector<string> tmp = v;
			fill_red_row(tmp,v1);
			fill_red_col(tmp,v2);
			REP(i,h) REP(j,w) cnt += tmp[i][j] == '#';
			ans += cnt == k;
		}
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

