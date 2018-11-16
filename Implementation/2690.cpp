#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{ int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
vector<int>v;
int i=1;
while(v.size()<n)
{
    for(int j=0; j<n; j++)
    {
        if(arr[j]==i)
        {
            v.push_back(j+1);
           i++;
        }
    }
}


for(int i=0; i<n-1; i++)
    cout<<v[i]<<" ";
    cout<<v[n-1];


    return 0;
}
