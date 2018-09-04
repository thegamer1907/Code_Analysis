#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    vector<int> sum(n);
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0)
            sum[i]=x;
        else{
            sum[i]=x+sum[i-1];
        }
    }
    int m;
    cin>>m;
    vector<int> j(m);
    for(int i=0;i<m;i++)
        cin>>j[i];
    for(int i=0;i<m;i++){
        x=j[i];
        int l=0,r=n-1;
        if(sum[0]>=x)
        {
            cout<<1<<endl;
            continue;
        }
        while(r-l>1){
            int mid=(l+r)/2;
            if(sum[mid]>=x) r=mid;
            else l=mid;
        }
        cout<<r+1<<endl;
    }
}