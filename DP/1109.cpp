#include<bits/stdc++.h>
using namespace std;
int main() {
    long n,count=0;
    cin>>n;
    long a[n],b[n];
    for(long i=0;i<n;i++)
        cin>>a[i];
    for(long i=0;i<n;i++)
    {
        if(a[i]==1)
            b[i]=-1;
        else
            b[i]=1;
    }
    int max_so_far = INT_MIN, max_ending_here = 0, start =0, end = 0, s=0; 
  
    for (int i=0; i< n; i++ ) 
    { 
        max_ending_here += b[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
    for(long i=start;i<=end;i++)
    {
        a[i]=!a[i];
    }
    for(long i=0;i<n;i++)
    {
        if(a[i]==1)
            count++;
    }
    cout<<count;
}