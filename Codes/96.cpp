#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
ll a[n],s=0;
for(int i=0;i<n;++i)
{
    cin>>a[i];
    s+=a[i];
}
int x,y;
if(s%3!=0)
{
    cout<<"0";
}
else
{
    ll r=s/3;
    for(int i=0;i<n;++i)
    {
        r-=a[i];
        if(r==0)
        {
            x=i;
            break;
        }
    }
    if(r!=0)
    {
        cout<<"0";
    }
    else
    {
        r=s/3;
        for(int i=n-1;i>=0;--i)
        {
            r-=a[i];
            if(r==0)
            {
                y=i;
                break;
            }
        }
        if(r!=0)
        {
            cout<<"0";
        }
        else
        {
            if(y<=x+2)
            {
                if(y==x+2)
                {
                    if(s==0)
                    {
                        cout<<1;
                    }
                    else
                        cout<<0;
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                r=s/3;
                for(int i=x+1;i<y;++i)
                {
                    r-=a[i];
                }
                if(r!=0)
                {
                    cout<<"0";
                }
                else
                {
                    vector<int> ri,le;
                    ll re=0;
                    for(int i=y-1;i>x+1;--i)
                    {
                        re+=a[i];
                        if(re==0)
                            ri.push_back(i);
                    }
                    re=0;
                    for(int i=x+1;i<y-1;++i)
                    {
                        re+=a[i];
                        if(re==0)
                            le.push_back(i);
                    }
                    sort(ri.begin(),ri.end());
                    ll ans=le.size()+ri.size()+1;
                    int j=0;
                    for(int i=0;i<le.size();++i)
                    {
                        while(j<ri.size()&&ri[j]<=le[i]+1)
                        {
                            ++j;
                        }
                        //cout<<ans<<" ";
                        ans+=ri.size()-j;
                    }
                    cout<<ans;
                }
            }
        }
    }
}
}