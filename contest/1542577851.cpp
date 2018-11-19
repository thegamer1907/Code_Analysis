#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>

#define FOR(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define vi vector<int>
#define MOD 1000000007
#define FORE(i,a,b) for(int i=a;i<=b;i++) 
#define INF 10000000

using namespace std;
   
int main(){
  int n,k;
  cin >> n >> k;
  int freq[20];
  FOR(i,20)freq[i]=0;
  FOR(i,n){
   //cout<<"Hello"<<endl;
   int num  = 0;
   int v = 0;
   FOR(j,k){
      cin >> v;
      num+=v<<j;
   }
   freq[num]++;
  }
  vi vv;
  FOR(i,20){
   if(freq[i]!=0){
      vv.push_back(i);
   //   cout<<i<<endl;
   }
  }
  bool ok = false;
  FOR(i,vv.size()){
   FOR(j,vv.size()){
      if((vv[i]&vv[j])==0)ok=true;
   }
  }
  if(ok){
   cout<<"YES"<<endl;
  }else{
   cout<<"NO"<<endl;
  }

   return 0;
}