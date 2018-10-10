#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
    vector<ll>v1,v2;
    ll n,k,c=0,k1,mx=0;
    char a,b;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k>=n/2)
    {
        cout<<n<<endl;
        return 0;
    }
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            c=1;
            while(s[i]==s[i+1] && i+1<n)
            {
               c++;
               i++;
            }
            mx=max(mx,c);
        }
        cout<<mx<<endl;
        return 0;
    }
    a=s[0];
    if(a=='a') b='b';
    else b='a';
    v1.push_back(0);
    v2.push_back(0);
    //cout<<a<<" "<<b<<endl;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1] && i+1<n)
        {   c++;
            //cout<<c<<endl;

            if(c%2==0)
            {
                v1.push_back(i+1);
            }
            else
            {
                v2.push_back(i+1);
            }
        }
    }
    //for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    //cout<<endl;
    //for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
    for(int i=0;i<v1.size();i++)
    {
        k1=k;
        c=0;
        for(int j=v1[i];j<n;j++)
        {

            if(s[j]!=a)
            {
                k1--;
            }
            if(k1<0) break;
            c++;
        }
        mx=max(c,mx);
    }
    for(int i=0;i<v2.size();i++)
    {
        k1=k;
        c=0;
        for(int j=v2[i];j<n;j++)
        {

            if(s[j]!=b)
            {
                k1--;
            }
            if(k1<0) break;
            c++;
        }
        mx=max(c,mx);
    }
    cout<<mx<<endl;
    return 0;
}
/*
10 3
aabbbbbbaa
*/