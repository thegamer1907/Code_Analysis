#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    int minn=INT_MIN,maxx=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(maxx<x) maxx=x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    int extra=m;
    while(extra)
    {
        while(extra!=0 and v[0]<=v[1]){
        v[0]++;
        extra--;}
        //for(int i=0;i<n;i++) cout<<v[i]<<" ";
        //cout<<endl;
        sort(v.begin(),v.end());
    }
    
    for(int i=0;i<n;i++)
    {
        if(v[i]>minn) minn=v[i];
    }
    cout<<minn<<" ";
    cout<<maxx+m;
    
    return 0;
}