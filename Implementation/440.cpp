#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[50], n, k,i,num;
    int count = 0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    num = x[k-1];
    for(i=0;i<n;i++)
    {
        if(x[i]>0 && x[i]>=num) count++;
    }
    cout<<count<<endl;

}