#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k;
    cin>>n>>k;
    ll a[n][k];
    for(i=0;i<n;i++)
        for(j=0;j<k;j++)
            cin>>a[i][j];
    if(k==1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else if(k==2)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        ll f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    else if(k==3)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        ll f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]<=1 && a[i][2]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==1 && a[i][2]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]==0 && a[i][2]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    else if(k==4)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0 && a[i][3]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        ll f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]<=1 && a[i][2]<=1 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==1 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]<=1 && a[i][2]==0 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==0 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]<=1 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==0 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]<=1 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==0 && a[i][2]==1 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]<=1 && a[i][2]==0 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==0 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]<=1 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==0 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]<=1 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==1 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]==0 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==1 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]==0 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==1 && a[i][2]==0 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]==0 && a[i][2]<=1 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==0 && a[i][1]==1 && a[i][2]==1 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]<=1 && a[i][1]==0 && a[i][2]==0 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==0 && a[i][2]==1 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]<=1 && a[i][2]==0 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==1 && a[i][2]==0 && a[i][3]==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]==0 && a[i][2]<=1 && a[i][3]==0)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i][0]==1 && a[i][1]==1 && a[i][2]==1 && a[i][3]==0)
            {
                f=1;
            }
        }
        if(f==1)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0 && a[i][3]<=1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

