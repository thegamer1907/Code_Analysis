#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long int l;
    
    scanf("%d %ld",&n,&l);
    
    long int a[n],diff[n+1];
    long int max;
    
    for(int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    
    sort(a, a+n);
    
    diff[0] = a[0];
    
    for(int i=1;i<n;i++)
        diff[i] = a[i] - a[i-1];
        
    diff[n] = l - a[n-1];
    
    sort(diff,diff+n+1);
    
    if(a[0]!=0 && a[n-1]!=l)
    {
        if(a[0]>(l-a[n-1]))
            max = a[0];
        else
            max = l-a[n-1];
            
        if(max>diff[n]/2)
            printf("%.10f",(float)max);
        else
            printf("%.10f",(float)(diff[n])/2);
    }    
    else if(a[0]!=0)
    {
        if(a[0]>diff[n]/2)
            printf("%.10f",(float)a[0]);
        else
            printf("%.10f",(float)(diff[n])/2);
    }
    else if(a[n-1]!=l)
    {
        if((l-a[n-1])>diff[n]/2)
            printf("%.10f",(float)(l-a[n-1]));
        else
            printf("%.10f",(float)(diff[n])/2);
    }
    else
        printf("%.10f",(float)(diff[n])/2);
    
    return 0;
}