#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
void computelps(string s,int n,int lps[])
{
    lps[0]=0;
    for(int i=1;i<n;++i)
    {
        int j=lps[i-1];
        while(1)
        {
            if(j==0)
            {
                if(s[i]==s[j])
                {
                    lps[i]=j+1;
                }
                else
                {
                    lps[i]=0;
                }
                break;
            }
            else
            {
                if(s[i]==s[j])
                {
                    lps[i]=j+1;
                    break;
                }
                else
                {
                    j=lps[j-1];
                }
            }
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
string s;
cin>>s;
int n=s.length();
if(n<=2)
cout<<"Just a legend";
else
{
    int lps[n]={0};
    computelps(s,n,lps);
    int f=0;
    for(int i=1;i<n-1;++i)
    {
        if(lps[i]==lps[n-1])
            f=1;
    }
    if(f==0&&lps[n-1]!=0)
    {
        lps[n-1]=lps[lps[n-1]-1];
    }
    if(lps[n-1]==0)
    {
        cout<<"Just a legend";
    }
    else
    {
        cout<<s.substr(0,lps[n-1]);
    }
}
}