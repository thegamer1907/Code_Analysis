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
   int h,m,s,t1,t2;
   cin  >> h >> m >> s >> t1 >> t2;
   bool ok = false;
   //clockwise
   double dh,dm,ds,dt1,dt2;
   ds = 6*s;
   dm = s/10.0 + 6*m;
   dh = 30*(h+dm/360);
   dt1 = 30*t1;
   dt2 = 30*t2;

   int ctr = 0;
   if(dt2<dt1){
      double te = dt2;
      dt2 = dt1;
      dt1 = te;
   }   if(dt1<=dh && dh<=dt2)ctr++;
   if(dt1<=dm && dm<=dt2)ctr++;
   if(dt1<=ds && ds<=dt2)ctr++;
   if(ctr == 0 || ctr == 3){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
   return 0;
}