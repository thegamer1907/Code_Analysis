#include <bits/stdc++.h>
#define int long long
using namespace std;
const int oo = 1e5 + 5 ;
int a[oo];
map<int,int> dem;
void solve1()
{
    if(a[1]%2)
        cout<<"sjfnb";
    else
        cout<<"cslnb";
}
int32_t main()
{
    int n, x, nim=0, cnt=0;
    scanf("%lld", &n);
    for (int i=1; i<=n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a+1,a+n+1);
    int dc=0;
    for(int i=1; i<=n; i++)
    {

        dem[a[i]]++;
        if(dem[a[i]]==2) dc++;
       // cerr<<dem[i]<<" "<<dem[i-1];
        if((dem[a[i]]==2&&dem[a[i]-1]==1)||dem[0]==2||dc==2||dem[a[i]]==3)
        {

            cout<<"cslnb";
            return 0;
        }
        cnt+=(a[i]-(i-1));
    }
    if(cnt%2)
        cout<<"sjfnb";
    else
        cout<<"cslnb";

    return 0;
}