#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

bool f(pair<int,int> p1, pair<int,int> p2){
	if(p1.first == p2.first) return p1.second > p2.second;
	else return true;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<pair<int,int>> choc(n), box(m);
	REP(i,n) cin >> choc[i].first;
	REP(i,n){
		cin >> choc[i].second;
	}
	REP(i,m) cin >> box[i].first;
	REP(i,m){
		cin >> box[i].second;
	}
	sort(all(choc));
	sort(all(box));
	sort(all(choc),f);
	sort(all(box),f);
	//for(auto p : choc) cout << p.first << " " << p.second << endl;
	//for(auto p : box) cout << p.first << " " << p.second << endl;
	int indx = 0;
	for(int i = 0; i <n; ++i){
		while(indx < m && !(choc[i].first <= box[indx].first && choc[i].second <= box[indx].second))indx++;
		if(!(indx == m)){
			indx++;
			continue;
		}
		cout << "No" << endl;
		return;
	}
	cout << "Yes" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

