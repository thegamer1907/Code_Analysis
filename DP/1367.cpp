#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],temp[n];;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    int counter=0,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                temp[j]=0;
            }
            else
            {
                temp[j]=1;
            }
            for(int j=0;j<n;j++)
            {
                if(temp[j]==1)
                counter++;
            }
            if(counter>maxi)
                maxi=counter;
            counter=0;
        }

        for(int j=0;j<n;j++)
        {
            temp[j]=arr[j];
        }
    }
    cout<<maxi;
}
