#include<bits/stdc++.h>   //header file which include many header files

using namespace std;

#define boost1 std::ios::sync_with_stdio(false); 	// write boost1; in first line of main
#define boost2 cin.tie(NULL);	// write boost2; in first line of main
#define forp(i,a,b) for( i=a;i<=b;i++)
#define FOR(tt,a,b) for(int tt=a;tt<=b;tt++)
#define rep(i,n)    for( i=0;i<n;i++)
#define ren(i,n)    for( i=n-1;i>=0;i--)
#define forn(i,a,b) for( i=a;i>=b;i--)
#define MOD 1000000007
#define pb push_back
#define mp make_pair

typedef long long  ll;
typedef unsigned long long ull;

int main()
{
    int n, x, cnt0=0, cnt1 =0;
    vector<int> v, dif;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.pb(x);
        if(x==0){
            dif.pb(1);
            cnt0++;
        }else{
            dif.pb(-1);
            cnt1++;
        }
    }
        int maxSoFar = dif[0], currMax = dif[0];
        for (size_t i = 1; i < n; i++) {
            currMax = max(dif[i], currMax+dif[i]);
            maxSoFar = max(maxSoFar, currMax);
        }
        // cout<<cnt1<<" "<<maxSoFar<<"\n";
        cout<<cnt1+maxSoFar;

    return 0;
}
