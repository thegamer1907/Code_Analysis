#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ones=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            ones++;
            a[i]=-1;
        }
        else
            a[i]=1;
    }
    int curr_max=a[0];
    int max_so_far=a[0];
    for(int i=1;i<n;i++)
    {
        curr_max=max(curr_max+a[i], a[i]);
        max_so_far=max(max_so_far, curr_max);
    }
    cout<<ones+max_so_far<<endl;
}
