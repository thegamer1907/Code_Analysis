#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define sd second
#define fst first
#define lp(i,n) for(int x=i;x<n;x++)
#define pb push_back
#define mp make_pair
#define PI 3.14159265
#define maxn 100010
#define inf 0x3f3f3f3f
vector<int>g[10005];
bool vs[10005];
int s[10005];
vector<int>lef;
int ct=0;
int a[100005],t,n;
bool valid(int x)
{
    int c=0,p1=0;
    LL s=0;
    for(int i=0;i<n;i++)
    {
        //cout<<endl<<s<<" "<<c<<" "<<p1<<endl;
        s+=a[i];
        if(s<=t)
        {
            c++;
            if(c>=x)return 1;
        }
        else
            {s-=a[p1];p1++;}
        if(c>=x)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int  start = 0,end = 2e9,mid,res;
    while( end > start)
    {
        mid = start+( end - start-1 ) / 2;
        if(  valid(mid) )
            {start= mid+1;res=mid;}
        else
            end = mid;
    }
    cout<<res<<endl;
    return 0;
}
