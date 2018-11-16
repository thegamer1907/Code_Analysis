#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll  long long
#define print cout<<
#define rtn return 0
int binserch(vector <int> arr,int l,int r,int x){
   if(r >= l){
    int av = l + (r - l) / 2;
     if(arr[av] == x) return av;

     if(arr[av] > x) return binserch(arr,l,av - 1,x);

     else return binserch(arr,av + 1,r,x);

      return - 1;
   }
}
bool issimp(int a){
    for(int i = 2;i < a*a;i++){
        if(a%i==0)
         return false;
    }
    return true;
}
long delit(long x){
    int c = 1;
    for(int i = 2;i <= x;i++){
        if(x % i == 0){
          c++;
       }
    }
   return c;
}

int main ()
{
  ios_base::sync_with_stdio(0);
  cin.clear();
  //freopen("input.txt","r",stdin); 
  //freopen("output.txt","w",stdout); 
  string s;
  cin >> s;
  if(s.find("AB") != -1&& s.find("BA",s.find("AB")+2) != -1 || s.find("BA") !=- 1 && s.find("AB",s.find("BA")+2) != -1)  
    print "YES";
  else 
    print "NO";
  return 0;
}