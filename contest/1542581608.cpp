#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define ins insert
#define sz size
#define cl clear
#define mod 1000000007

using namespace std;

int main()
{
    bool flag1=false,flag2=false;
    char a[2];
    cin>>a[0]>>a[1];

    ll n,i,j;
    cin>>n;

    char b[n][2];

    for(i=0;i<n;i++)
    {
        cin>>b[i][0]>>b[i][1];
    }
    for(i=0;i<n;i++)
    {
        if(b[i][0]==a[0] && b[i][1]==a[1])
        {
            cout<<"YES";
            exit(0);
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i][0]==a[1])
            flag1=true;
        if(b[i][1]==a[0])
            flag2=true;
    }
    if(flag1 && flag2)
        cout<<"YES";
    else
    {
        flag1=false;
        flag2=false;
        for(i=0;i<n;i++)
        {
            if(b[i][1]==a[0])
                flag1=true;
            if(b[i][0]==a[1])
                flag2=true;
        }
        if(flag1 && flag2)
            cout<<"YES";
        else
            cout<<"NO";

    }
}
