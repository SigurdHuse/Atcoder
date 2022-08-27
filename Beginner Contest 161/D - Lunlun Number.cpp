#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We generate the numbers in the order they occur

void solve(){
	int k; cin >> k;
	int cnt = 9;
	if(k < 10){
		cout << k << endl;
		return;
	}
	queue<string> q;
	for(int i = 1; i < 10; ++i) q.push(to_string(i));
	while(cnt < k){
		string cur = q.front();
		q.pop();
		char last = cur.back();
		if(last == '0'){
			q.push(cur + "0"); cnt++;
			if(cnt == k) break;
			q.push(cur + "1"); cnt++;
		}
		else if(last == '9'){
			q.push(cur + "8"); cnt++;
			if(cnt == k) break;
			q.push(cur + "9"); cnt++;
		}
		else{
			last--;
			q.push(cur + last); cnt++;
			if(cnt == k) break;
			last++;
			q.push(cur + last); cnt++;
			if(cnt == k) break;
			last++;
			q.push(cur + last); cnt++;
		}
	}
	string ans;
	while(!q.empty()){
		ans = q.front();
		q.pop();
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}
