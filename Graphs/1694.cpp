#include <iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,t;
cin>>n>>t;
int arr[n];
for(int i=1;i<n;i++)
    cin>>arr[i];
for(int i=1;i<n;)
{
i+=arr[i];
if(i>t)
{
    break;
}
if(i==t){
    cout<<"YES";
    return 0;
}
}
cout<<"NO";
    return 0;
}
