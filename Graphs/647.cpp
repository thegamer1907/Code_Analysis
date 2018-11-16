#include <iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    char arr[50];
    int t,i,n;
    cin>>n>>t;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if((arr[i]=='B')&&(arr[i+1]=='G'))
            {
                arr[i]='G';
                arr[i+1]='B';
                i=(i+1);
            }
        }

    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j];
    }
    return 0;
}
