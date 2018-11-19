#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;

int mp[100];

int to_dec(int ar[], int n)
{
    int num=0, k=1;
    for(int i=n-1; i>=0; i--)
    {
        num += (ar[i]*k);
        k*=2;
    }
    return num;
}

int main()
{
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int ar[4];
        for(int j=0; j<k; j++)
            cin >> ar[j];
        int x = to_dec(ar,k);
        mp[x]=1;
    }  
    int ans=0; 
    if(mp[0])
    {
        cout << "YES\n";
        return 0;
    }
    if(k >= 2)
    {
        if(mp[1] && mp[2])
            ans=1;
    }
        for(int i=1; i<16; i++)
        {
            for(int j=1; j<16; j++)
            {
                if( (i&j) == 0)
                {
                    if(mp[i] && mp[j])
                        ans=1;
                }
            }
        }
    
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}