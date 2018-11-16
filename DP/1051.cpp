#include<bits/stdc++.h>

using namespace std;

int main() {
 int n;
 cin>>n;
 int value;
 vector<int>v;
 
 
 for (int i=0;i<n ;i++)
{
     cin>>value;  
     v.push_back(value);}
 
     int m=0;
 
     for (int j=0;j<n;j++)
     { 
          for (int k=j;k<n;k++)
          {  
               int cnt=0;
               for (int i=0;i<n;i++) 
               { 
                     if (i<=k && i>=j) 
                          cnt+= (1-v[i]);
                     else 
                          cnt+=v[i];
                }
                m=max(m, cnt);
           }
      }
      cout<<m;
}