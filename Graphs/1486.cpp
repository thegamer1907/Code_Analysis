#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n,t;
   cin>>n>>t;
   vector<int>v(n-1);
   for (int i=0;i<n-1;++i){
      cin>>v[i];
   }
   --t;
   vector<bool>house(n,false);
   house[0]=true;
   int i=0,k=0;
   while (k<n-1){
      if (house[(v[i]+i)%n]){cout<<"NO";return 0;}
      if ((v[i]+i)%n==t){cout<<"YES";return 0;}
      if ((v[i]+i)%n==n-1){cout<<"NO";return 0;}
      house[(v[i]+i)%n]=true;
      i=(v[i]+i)%n;
      ++k;
   }
   return 0;
}