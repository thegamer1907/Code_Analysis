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
    int n,m;
    cin>>n;
    int a[n];
    f(0,n)
    cin>>a[i];
    cin>>m;
    int b[m];
    f(0,m)
    cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    int cc=0;
    f(0,n)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]!=-1 && b[j]!=-1)
            {
                if(abs(a[i]-b[j]) <= 1)
                {cc++;a[i]=-1;b[j]=-1;break;}
            }
        }  
    }
    cout<<cc<<endl;
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