#include<time.h>
#include<limits.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<sstream>
#define f(a,n) for(ll i=a;i<n;i++)
#define watch(x) cout<< (#x) <<" is "<< (x) <<endl;
#define ll long long
#define pb push_back
#define mp make_pair
#define X first
#define Y second

using namespace std;



void solve()
{
    int n;
    cin>>n;
    vector<int>a(n+2);
    int z=0;
    int pref[n+2];
    pref[0]=0;
    f(1,n+1)
    {
        cin>>a[i];
        pref[i] = pref[i-1]+a[i];
        if(a[i] == 1)
        a[i] = -1;
        else//0
        {a[i] = 1;z++;}
    }
    if(z == n)
    {cout<<n<<endl;exit(0);}
    if(z==0)
    {cout<<n-1<<endl;exit(0);}
    int tot = n-z;
    int maxs=INT_MIN,cur_max=0;
    int s = 1,e=1,temp=1;
    for(int i=1;i<=n;i++)
    {
        cur_max += a[i];
        if(cur_max < 0)
        {cur_max = 0;temp=i+1;}
        if(cur_max > maxs)
        {
            e = i;
            s=temp;
            maxs = cur_max;
        }
        
    }
    int count = e-s+1;
    int set = pref[e] - pref[s-1];
    int ans = tot - set + (count - set);
    cout<<ans<<endl;
    
}

int main()
{
    #ifdef JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t beg = clock();
    solve();
    clock_t end = clock();
    fprintf(stderr, "%.3f sec\n", double(end - beg) / CLOCKS_PER_SEC);
    return 0;
 
}