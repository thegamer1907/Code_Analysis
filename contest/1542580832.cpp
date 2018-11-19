#include<bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
   
 string a;
 cin>>a;
 int n,cnt=0;
 cin>>n;
 vector<string> v;
 bool flag1=0;
 bool flag2=0;
 
 for(int i=0; i<n; i++){
 string str;
 cin>>str;
 v.push_back(str);
 }
 for(int i=0; i<n; i++){
 if(v[i][0]==a[0] and v[i][1]==a[1]){
 cout<<"YES"<<endl; return 0;
 }
 for(int i=0; i<n; i++){
 if(v[i][1]==a[0])flag1=1;
 if(v[i][0]==a[1])flag2=1;
 }
 if(flag1 and flag2){
 cout<<"YES"<<endl;
 return 0;
 }
 }
 cout<<"NO"<<endl;
   return 0;
}