#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <fstream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <array>
#include <bitset>
#include <complex>
#include <numeric>
using namespace std;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
#define sz(a) int((a).size())
#define ll long long
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define allr(c) (c).rbegin(),(c).rend()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(a,n) for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n) for(long long i=0;i<n;i++)cout<<a[i]<<endl
int main()
{
    ll n,min=INT_MAX,index1=0,index2=0;
    cin>>n;
    vector<int> v(n);
    for(ll i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
            v[i]=1;
        else
            v[i]=-1;
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i;j<n;j++)
        {
            ll k,sum=0;
            for(k=i;k<=j;k++)
            {
                sum+=v[k];
            }
            if(sum<min)
            {
                min=sum;
                index1=i;
                index2=k;
            }
        }
    }
    for(ll i=index1;i<index2;i++)
    {
        if(v[i]==1)
            v[i]=0;
        else
            v[i]=1;
    }
    cout<<count(all(v),1);
}
