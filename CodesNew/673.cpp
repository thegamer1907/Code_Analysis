#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n, m;
    cin>>n>>m;
    string s;
    map <string,int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        mp[s]=1;
    }
    int c=0;
    for(int i=0; i<m; i++)
    {
        cin>>s;
        if(mp[s]==1)
            c++;
    }
    if(c%2!=0) 
        n++;
    if(n>m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}