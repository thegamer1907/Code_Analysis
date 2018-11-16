#include<iostream>
#include <math.h> 
using namespace std;


  
int main()
{
        int n,t;cin>>n>>t;char a[n+1];
        cin>>a;
        for(int j=0;j<t;j++)
        for(int i=0;i<n-1;i++)
        {
                  if(a[i]=='B'&&a[i+1]=='G')
                  {
                           a[i]='G';
                           a[i+1]='B';
                           i++;
                  }
        }
        cout<<a;
}