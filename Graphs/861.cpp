#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ii pair <int,int>
#define S second
#define F first
ll ans,m,x,t;
ll n;
int a[30100];
int main()
{
    cin>>n>>t;
    for(int i=1 ; i<n ; i++)
    {
        cin>>a[i];
    }

    for(int i=1 ; i<n ; i++)
    {
        if(a[i]+i==t)
        {
            cout<<"YES";
            return 0;
        }
        else if(a[i]+i>t)
        {
            cout<<"NO";
            return 0;
        }
        else
            i+=a[i]-1;
    }

}




