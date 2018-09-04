#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string temp;
string str;

ll p[1000000]={0};
ll s[1000000]={0};

void prefix()
{
    string res=str;
    
    ll l=0,r=0,n=res.length();
    
    for (ll i=1;i<n;i++)
    {
        if (i>r)
        {
            l=r=i;
    
            while (r<n && res[r]==res[r-l]) r++;
            
            p[i]=r-l;
            r--;
        }
        else
        {
            ll k=i-l;
            
            if (p[k]<r-i+1) p[i]=p[k];
            else
            {
                l=i;
                
                while (r<n && res[r]==res[r-l]) r++;
                p[i]=r-l;
                r--;
            }
        }
    }
}

void suffix()
{
    ll n=str.length();
    ll l=n-1,r=n-1;
    
    for (ll i=n-2;i>=0;i--)
    {
        if (i<l)
        {
            l=r=i;
            
            while (l>=0 && str[l]==str[n-1-r+l])    l--;
            s[i]=r-l;
            l++;
        }
        else
        {
            ll k=n-r+i-1;
            
            if (s[k]<i-l+1) s[i]=s[k];
            else
            {
                r=i;
                
                while (l>=0 && str[l]==str[n-r+l-1])    l--;
                s[i]=r-l;
                l++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    cin>>str;
    
    ll n=str.length();
    
    prefix();
    suffix();
    
    /*for (ll i=0;i<n;i++)    cout<<p[i]<<" ";
    cout<<endl;
    for (ll i=0;i<n;i++)    cout<<s[i]<<" ";
    cout<<endl;*/
    
    ll cnt[n+1]={0};
    ll ind[n+1];
    
    for (ll i=0;i<=n;i++)   ind[i]=-1;
    
    for (ll i=0;i<n;i++)    
    {
        cnt[p[i]]++;
        ind[p[i]]=i;
    }
    
    ll sum=cnt[n];
    
    for (ll i=n-1;i>=0;i--) 
    {
        cnt[i]+=sum;
        
        sum=cnt[i];
    }
    
    bool flag=false;
    
    for (ll i=n;i>=1;i--)
    {
        if (cnt[i]>=2 && (ind[i]+i)==n)
        {
            flag=true;
            
            for (ll j=0;j<i;j++)    cout<<str[j];
            cout<<endl;
            
            break;
        }
    }
    
    if (!flag)  cout<<"Just a legend"<<endl;
}