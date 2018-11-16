//just some shitty code
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,t,arr[300000];
cin >>n>>t;
for(int i = 0 ; i  < n -1;i++)
{
    cin >> arr[i];
}
int index = 1;
for(int i  = 0 ; i  < n-1 ;)
{
    if(index == t)
    {
        cout <<"YES"<<endl;
        return 0;
    }

    index+=arr[i];
    i+=arr[i];
        if(index == t)
    {
        cout <<"YES"<<endl;
        return 0;
    }
}

    cout <<"NO"<<endl;
}


