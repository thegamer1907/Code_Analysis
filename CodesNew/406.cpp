#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define allv v.begin(),v.end()
#define xsort(x) sort(x.begin(),x.end())
#define sortar(arr,n) sort(a,a+n)
#define intpair pair<int,int>
#define cinint(a) scanf("%d",&a)
#define printint(a); printf("%d\n",a);
#define line   '\n'
#define sqr(x) ((x)*(x))
#define pq priority_queue
#define mp make_pair
#define printvector(v); for (auto i : v) cout<<i<<endl;
#define yes "YES"
#define no "NO"




int main()
{
    int n, r=0,po=0,y=0,ctr;
    ll t, sum =0 ;
    cinint(n);
    vector<int> v(n);
    int p2=n-1;
    cin>>t; int c = 0;
    for (int i =0 ; i<n; i++)
    {
        cinint(v[i]);
        sum+=v[i];
        r++;
        while(sum>t)
        {
            sum-=v[po];
            po++;
            r--;
        }
        c=max(c,r);
    }

    cout<<c<<endl;

}
