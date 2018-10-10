#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
string s;
int n,m,g;
int main()
{
    cin>>n>>m;
    for (int i=0;i<n+m;i++)
    {
        cin>>s;
        if (mp[s]==1) g++;
        mp[s]=1;
    }
    n-=g;
    m-=g;
    n+=(g+1)/2;
    m+=(g)/2;
    if (n>m)  cout<<"YES";  else cout<<"NO";
}
