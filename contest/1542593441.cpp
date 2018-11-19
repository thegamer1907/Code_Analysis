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
   string s;
   cin >>s;
   int n;
   cin >> n;
   string arr[n];
   FOR(i,n)cin >> arr[i];
   bool ok = false;
   FOR(i,n){
      if(s == arr[i]){
         ok = true;
      }
   }
   bool f=false,b=false;
   FOR(i,n){
      if(arr[i][1] == s[0])f=true;
      if(arr[i][0] == s[1])b=true;

   }
   if(ok || (f&b)){
      cout<<"YES"<<endl;
   }else{
      cout<<"NO"<<endl;
   }

   return 0;
}