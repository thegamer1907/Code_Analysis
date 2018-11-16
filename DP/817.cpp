#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n],one=0,zero=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            a[i]=-1;
            one++;
        }
        else
        {
            a[i]=1;
            zero++;
        }
    }
    int max_so_far = INT_MIN, max_ending_here = 0,one1=0,zero0=0,temp=0;
    for(i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
        {
            max_ending_here=0;
            one1=0;
            zero0=0;
            continue;
        }
        if(a[i]==1)
            one1++;
        if(a[i]==-1)
            zero0++;
        if (max_so_far < max_ending_here)
        {
            max_so_far=max_ending_here;
            temp=one+one1-zero0;
        }
    }
    if(temp>0)
        cout<<temp;
    else
        cout<<n-1;
    return 0;
}
