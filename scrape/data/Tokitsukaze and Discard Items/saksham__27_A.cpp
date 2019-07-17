#include<bits/stdc++.h>
using namespace std;
int main()
{
int64_t l,n,m,k,ans=0,j=0,i,t;
 string s;
 cin>>n>>m>>k;//cout<<"ooooo\n";
 vector<int64_t> p(m);//cout<<"ooooo\n";
 for(i=0;i<m;i++)
 {
     cin>>p[i];

 }l=k+1;//cout<<"ooooo\n";
 for(i=0;i<m;i++)
 {//cout<<"ooooo\n";
     if(p[i]<l)
     {
         j++;
     }else
     {
         if(j==0)
         {
            t=(p[i]-l)/k;
             l+=k*t+k;

             i--;
         }
         else
         {
             l+=j;
             j=0;
             ans++;
             i--;
         }
     }
 }//cout<<"ooooo\n";
 if(j>0)
 ans++;
 cout<<ans;}