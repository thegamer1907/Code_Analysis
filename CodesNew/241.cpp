/* Bismillahhir Rahmanir Rahim*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,t,x;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int s=0,c=0,p=0,mx=0;
    for(int i=0; i<n; i++)
    {
        s=s+v[i];
        c++;
        while(s>t)
        {
            s-=v[p];
            c--;
            p++;
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;
}
