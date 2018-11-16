#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,t;
cin>>n>>t;

int arr[n];

for(int i=0;i<n-1;i++)
cin>>arr[i];

int current=0;
t--;

bool flag=0;


while(current<=t)
{
if(current==t)
flag=1;
current+=arr[current];
}


if(flag)
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;

return 0;
}
