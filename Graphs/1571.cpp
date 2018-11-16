#include <bits/stdc++.h>
using namespace std;
#define  ll long long
set<float >st;
int main() {
  int n,t;
    cin>>n>>t;
    int a[n-1];
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];

    }

   ll  sum=1;
    int  flag=0;
    int i=0;
    while(sum <=t)
    {
        sum+=a[sum];

        if(sum==t)
        {
            flag=1;
            break;
        }



    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}