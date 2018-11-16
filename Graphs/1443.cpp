#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long int n,t,cell=0,i=0,ele;
    vector<long int>a;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
    while(cell<t)
    {
        cell=i+1+a[i];
        i=i+a[i];
    }
    if(cell==t)
    cout<<"YES";
    else
    cout<<"NO";
}