#include <bits/stdc++.h>
#include <bitset>
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define hurry ios::sync_with_stdio(false)
#define PI 3.141592654

using namespace std;

int N,M,a[100001][5],sor;

int setBit(int mask,int i,int v)
{
    if(v) return (mask | (1<<i));
    return (mask &~ (1<<i));
}
int getBit(int mask,int i)
{
    return ( (mask >> i) & 1) == 1;
}
int countBits(int mask)
{
    int ans=0;
    while(mask)
    {
        if(mask%2) ans++;
        mask/=2;
    }
    return ans;
}

map<int,int> mp;

int check(int mask,int i)
{
    if(i==M)
    {
        if(mp[mask] && (mask & sor) == 0) return 1;
        return 0;
    }
    int temp,ans=0;
    temp=setBit(mask,i,0);
    ans=max(ans,check(temp,i+1));
    temp=setBit(mask,i,1);
    ans=max(ans,check(temp,i+1));
    return ans;
}


int main()
{
    hurry;
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
        sor=0;
        for(int j=0;j<M;j++) if(a[i][j]) sor=setBit(sor,j,1);
        if(check(0,0) || sor==0)
        {
            cout<<"YES";
            return 0;
        }
        mp[sor]=1;
    }
    cout<<"NO";
    return 0;
}
