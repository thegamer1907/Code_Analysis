#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    int a[n];
    int initial1=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {a[i]=-1;
        initial1++;}
        else
        a[i]=1;
    }
    if(initial1==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    // Apply kadane's algo to find maximum sum contiguous subarray
    ll max_so_far=0,max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here+=a[i];
        if(max_ending_here<0)
        max_ending_here=0;
        max_so_far=max(max_so_far,max_ending_here);
    }
    cout<<max_so_far+initial1;
}