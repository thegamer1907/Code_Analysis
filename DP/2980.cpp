#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

#define pb push_back
#define ll long long
#define REP(a,b) for(int(a)=0;(a)<(b); (a)++)
using namespace std;



int main(){
	int n;
  scanf("%i",&n);
  string m,t;
  cin>>m>>t;

  ll cost = 0;

  REP(a,n){
    if(m[a] == t[a]) continue;
    if(a == n-1){
      cost++;
      continue;
    }
    if(t[a] == m[a+1] && m[a+1] != t[a+1]){
      cost++;
      m[a+1] = t[a+1];
      continue;
    }
    cost++;

  }
  cout<<cost<<endl;
	return 0;
}
