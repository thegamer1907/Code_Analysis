#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
vector<char> v ;
ll a[200002], b[200002] ;
ll n ;
int ch(ll mid)
{
    for(int i=0; i<n; i++)
    {
        b[i]=a[i];
        b[i]-=mid*n;
    }

    int i=0, cnt=0;
    while(i<n)
    {
        ////cout<<b[i]<<" "<<cnt<<'\n';
        if(b[i]-cnt<=0)
        {
            return i+1;

        }
        cnt++ ;
//        if(i==n-1)
//        {
//            i=-1;
//        }
        i++;
    }
    return -1;
}
int main ()
{

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i] ;
    }
    if(n==1)
    {
        cout << 1 ;
        return 0 ;
    }
    int i=0 , cnt=0 ;
    ll lo=0, hi=1e9+1, res=-1, C=-1;
    while(lo <= hi)
    {
        int mid=(lo+hi)>>1;
        int idx=ch(mid);
        if(idx != -1)
        {
            res=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }///cout<<res<<"\n";
    cout<<ch(res);
}