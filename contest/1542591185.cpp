#include"bits/stdc++.h"
using namespace std;
const int N=1e5+5;
map<int,int> mp;
vector<int> v;
int main()
{
   long long int n,flag1=0,flag=0;
   string s,x;
   cin>>s;
   cin>>n;
   for(int i=0;i<n;++i){
    cin>>x;
    if(x==s)
        return cout<<"YES",0;
    if(s[0]==x[1]){
        flag=1;
    }
    if(x[0]==s[1]){
        flag1=1;
    }
   }
   if(flag&&flag1){
    return cout<<"YES",0;
   }
   else{
    return cout<<"NO",0;
   }
}
