#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define all(x) c.begin(), c.end()
#define mod 1000000007
#define IOS ios_base::sync_with_stdio(0)

int main(int argc, char const *argv[])
{
    ll n;
    cin>>n;
    vector<ll>A(n);
    for(ll i=0;i<n;i++)
    {
        cin>>A[i];
    }
    ll m;
    cin>>m;
    vector<ll>B(m);
    for(ll i=0;i<m;i++)
    {
        cin>>B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll i=0, j=0;
    ll cnt=0;
    while(i<n&&j<m)
    {
        if(abs(A[i]-B[j])<=1)
        {
            cnt++;
            i++;j++;
        }
        else if(A[i]>B[j])
        {
            j++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}