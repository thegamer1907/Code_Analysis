#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int i,j,k,l,m,n,p,q,r,t;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }      p=a[k-1];
sort(a,a+n);


    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]>=p)
            {
                printf("%d",n-i);
                return 0;
            }
        }
    }
    printf("0");




}
