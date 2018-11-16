#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0 ;
    scanf("%d%d",&n,&m);
    int arr[n];
    vector<int>v;
    map<int,int>mp;
    for (int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
     for(int i=v.size()-1;i>=0;i--)
     {
         if(mp[v[i]]==0)
         {
             mp[v[i]]=1;
             cnt++;
         }
         arr[i]=cnt;
     }
while(m--)
{
    int x;
    cin>>x;
    cout<<arr[x-1]<<endl;
}
    return 0;
}
