#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define N 1000011
#define LB lower_bound
#define M 1000000007
#define UB upper_bound
#define MP make_pair
#define LD long double
#define F first
#define S second

int main()
{
    LL n,z,i,j,lt,x,t,y,d,r,q,m,k;
    vector<LL> a(N),b(N);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>n>>m;
    k=0;
    d=1;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        if(a[i]>=d)
            k+=a[i]-d;
        else
            k+=n-d+a[i];
        d=a[i];
    }
    cout<<k<<endl;
}