#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,a=1,b=0,c,d,temp;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--)
    {


    for(i=0;i<n;i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i=i+1;
        }


    }
    }
    cout<<s;
}
