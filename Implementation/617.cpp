#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cn=0,x,k;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=v[k-1] && v[i]>0)cn++;
    }
    cout<<cn<<endl;



   return 0;
}
