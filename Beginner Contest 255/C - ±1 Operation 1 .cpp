#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int main(){
  long long x,a,d,n;
  cin >> x >> a >> d >> n;
  if(d<0){
    long long fi=a+d*(n-1);
    a=fi;
    d*=-1;
  }
  long long st=0,fi=(n-1);
  while(st<=fi){
    long long te=(st+fi)/2;
    if((a+d*te)<x){st=te+1;}
    else{fi=te-1;}
  }
  long long res=8e18;
  for(long long i=max(0ll,st-5);i<=min((n-1),st+5);i++){
    res=min(abs(a+d*i-x),res);
  }
  cout << res << '\n';
  return 0;
}

