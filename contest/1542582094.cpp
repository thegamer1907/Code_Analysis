#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

 int main(){
   int h,m,s,t1,t2;
   cin>>h>>m>>s>>t1>>t2;

   int a,b,c;
   a=h;b=m/5;c=s/5;

   vector<int> vec;
   vec.push_back(a);
   vec.push_back(b);
   vec.push_back(c);

   sort(vec.begin(),vec.end());
   int d=vec[0]+12;
   vec.push_back(d);

   for(int i=0;i<3;i++){
    //  cout<<vec[i]<<endl;
     if(t1>vec[i] && t1<=vec[i+1] && t2>vec[i] && t2<=vec[i+1]) {
       cout<<"YES"; return 0;
     }
     if(t1+12>vec[i] && t1+12<=vec[i+1] && t2>vec[i] && t2<=vec[i+1]) {
       cout<<"YES"; return 0;
     }
     if(t1>vec[i] && t1<=vec[i+1] && t2+12>vec[i] && t2+12<=vec[i+1]) {
       cout<<"YES"; return 0;
     }
     if(t1+12>vec[i] && t1+12<=vec[i+1] && t2+12>vec[i] && t2+12<=vec[i+1]) {
       cout<<"YES"; return 0;
     }
   }

   cout<<"NO"; return 0;
 }
