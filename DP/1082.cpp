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
    vector<int>v(n+1);
    int tot=0;
    f(0,n)
    {
        cin>>v[i];
        if(v[i])
        tot++;
    }
    int pref[n+1];
    pref[0] = 0;
    f(1,n+1)
    pref[i] = pref[i-1]+v[i-1];
    int ans = 0,cur=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int count = j-i+1;
            int set = pref[j]-pref[i-1];
            cur = tot + (count - set) - set;
            //if(cur > ans)
            //cout<<tot<<" "<<count<<" "<<set<<" "<<i<<" "<<j<<endl;
            ans = max(ans,cur);
            
        }
    }
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