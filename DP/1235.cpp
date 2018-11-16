#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>=b)
        return a;
    else
        return b;
}
ll min(ll a,ll b)
{
    if(a>=b)
        return b;
    else
        return a;
}
ll diff(ll a,ll b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;
}
ll mod(ll a)
{
    if(a>=0)
        return a;
    else
        return -a;
}
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int p=0,k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            p++;
        if(a[i]==0)
            k=1;
    }        
    int max=0;
    for(int i=0;i<n;i++)
    {
        int z=0,o=0;
        if(a[i]==1)
            o++;
        else
            z++;
        if(z-o>max)
                max=z-o;    
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==1)
                o++;
            else
                z++;
            if(z-o>max)
                max=z-o;
        }
    }
    if(k!=0)
        cout<<max+p;
    else
        cout<<n-1;
    return 0;
}        