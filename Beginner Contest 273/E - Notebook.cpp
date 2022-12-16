#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

struct Node{
	int val, par;
	vector<int> vec;
	Node(int v, int p){val = v, par = p;};
};

void solve(){
	int q; cin >> q;
	
	map<int,int> mp;
	vector<Node> vec;
	
	int v = 0, x;
	vec.push_back(Node(-1,0));
	
	string command;
	
	while(q--){
		cin >> command;
		if(command == "ADD"){
			cin >> x;
			vec.push_back(Node(x,v));
			vec[v].vec.push_back(SZ(vec) - 1);
			v = SZ(vec) - 1;
		}
		else if(command == "SAVE"){
			cin >> x;
			mp[x] = v; 
		}
		else if(command == "LOAD"){
			cin >> x;
			v = mp[x];
		}
		else if(command == "DELETE"){
			v = vec[v].par;
		}
		cout << vec[v].val << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

