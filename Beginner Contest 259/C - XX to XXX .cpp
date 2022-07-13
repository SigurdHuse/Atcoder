#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s, t; cin >> s >> t;
	int n1 = s.size(), n2 = t.size();
	if(n1 > n2){
		cout << "No" << endl;
		return;
	}
	vector<pair<char,int>> v1, v2;
	pair<char,int> cur = {s[0],1};
	for(int i = 1; i < n1; ++i){
		if(s[i] != cur.first){
			v1.push_back(cur);
			cur = {s[i],1};
		}
		else cur.second++;
	}
	v1.push_back(cur);
	cur = {t[0],1};
	for(int i = 1; i < n2; ++i){
		if(t[i] != cur.first){
			v2.push_back(cur);
			cur = {t[i],1};
		}
		else cur.second++;
	}
	v2.push_back(cur);
	/*
	for(int i = 0; i< (int)v1.size(); ++i){
		cout << v1[i].first << " " << v1[i].second;
		cout << " "<<v2[i].first << " " << v2[i].second << endl;
	}
	*/
	
	if(v1.size() != v2.size()){
		cout << "No" << endl;
		return;
	}
	for(int i = 0; i< (int)v1.size(); ++i){
		if(v1[i].first != v2[i].first){
			cout << "No" << endl;
			return;
		}
		if(v1[i].second < v2[i].second){
			if(v1[i].second < 2){
				cout << "No" << endl;
				return;
			}
		}
		if(v1[i].second > v2[i].second){
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

