#include<bits/stdc++.h>
    using namespace std;
     
    #ifdef LOCAL
      #define eprintf(...) fprintf(stderr, __VA_ARGS__)
    #else
      #define eprintf(...) 42
    #endif
     
    // #define lli long long int
    #define mp make_pair
    #define pb push_back
    #define sqr(a) ((a) * (a))
    #define sz(a) int(a.size())
    #define all(a) a.begin(), a.end()
    #define forn(i, n) for(int i = 0; i < int(n); i++) 
    #define fore(i, l, r) for(int i = int(l); i < int(r); i++)
int main()
{   
    long long int m,n,p;
    scanf("%lld %lld %lld",&m,&n,&p);
    long long int a[n];
    for(long long int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    long long int ind=0;
    long long int ans=0;
    long long sub=0;
    while(ind!=n)
    {
        long long e=a[ind]-sub;
        long long pa=e/p;
        if(e%p==0)
        pa--;
        long long int count=0;
        long long int maxi=(pa+1)*p;
        for(long long int i=ind;i<n && i<ind+p;i++)
        {
            if((a[i]-sub)<=maxi)
            count++;
            else
            break;
        }
        ind+=count;
        sub+=count;
        ans++;
    }
    printf("%lld",ans);
    return 0;
 }