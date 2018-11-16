#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=1;i<=t;i++)
    {
        int j=0;
        while(j<n-1)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                char ch=s[j];
                s[j]=s[j+1];
                s[j+1]=ch;
                j=j+2;
            }else{
                j++;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<s[i];
  return 0;
}