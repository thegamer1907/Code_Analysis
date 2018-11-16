#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int n,j,t,i;
    char s[100];
    cin>>n>>t;
    cin>>s;
    for(i=0;i<t;i++)
    {
      for(j=0;j<n-1;j++)       
        {
          if(s[j]=='B'&&s[j+1]=='G')    
              {
                  swap(s[j],s[j+1]);
                   j++;
              }  
        }
    }
    for(i=0;i<n;i++)
       cout<<s[i];
    
    
    return 0;
}