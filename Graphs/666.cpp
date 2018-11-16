#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int m;
     cin>>m;
     vector<char>a(n);
     for(int i=0;i<n;i++)
     {
            cin>>a[i];
     }
    // int i=0;
     int count = m;
     
     while(count)
     {
            for(int i=0;i<n-1;i++)
            {
                   if(a[i]=='B' and a[i+1]=='G')
                   {
                          a[i]='G';
                          a[i+1]='B';
                          i++;
                   }
            }
            count--;
     }
     
     
     for(int i=0;i<n;i++)
     cout<<a[i];
   
}