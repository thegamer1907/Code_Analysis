#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int min_so_far = INT_MAX;
    int min_now = 0;
    int a_start=-1,a_end=-1;
    int start = 0;
    int end =0;
    for(int i=0;i<n;i++)
        if(a[i]==0)
            a[i] = -1;
            
    bool ffirst=true,first = true;
    for(int i=0;i<n;i++)
    {
        min_now += a[i];
        
        if(min_now<0&&ffirst)
        {
            start = i;
            ffirst = false;
            first = true;
        }
        else if(min_now>=0&&first)
        {
            min_now = 0;
            first = false;
            ffirst = true;
            
        }
        else if(min_now>0)
            min_now = 0;
        
        if(min_now<min_so_far&&min_now<0)
        {
            min_so_far = min_now;
            a_start = start;
            a_end = i;
        }
        
    }
    int c=0;
    //cout<<a_start<<" "<<a_end<<endl;
    if(a_start>-1&&a_end>-1){
    for(int i=0;i<a_start;i++)
        if(a[i]==1)
            c++;
    for(int i=a_start;i<=a_end;i++)
        if(a[i]==-1)
            c++;
    for(int i=a_end;i<n;i++)
        if(a[i]==1)
            c++;
    }
    else
        c=n-1;
    cout<<c<<endl;
    return 0;
}