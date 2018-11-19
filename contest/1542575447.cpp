#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>
#include <cmath>
#include <limits>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <iomanip>


using namespace std;
bool isPrime(long long int p)
{
    if(p<2)
        return false;
    if(p==2)
        return true;
    if(p%2==0)
        return false;
    for(int i=3;i<=sqrt(p);i+=2)
    {
        if(p%i==0)
        return false;
    }
    return true;
}

 long long int j,x2,d,m,n,s,a,b,c,t,x,y,f,g,h=0,i,mid,mid2,o,p,lo,sum=0,cnt2=0,cnt1=0,q,dip,certi,maxi=0,maxi2=INT_MIN,maxi3=INT_MIN;
 long long int l,r,k;
int main()
{
   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

       string a1;
       cin>>a1;
       cin>>n;
       for(i=0;i<n;i++)
       {
           string a2;
           cin>>a2;
           if(a2[1]==a1[0])
              {
                  cnt1=1;
              }
          if(a2[0]==a1[1])
              {
                  cnt2=1;
              }
              if(a2[0]==a1[0]&&a2[1]==a1[1])
              {
                   cout<<"YES"<<endl;
                   return 0;
              }
       }
       if(cnt2==1&&cnt1==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

}
