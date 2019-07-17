#include <bits/stdc++.h>
#define int long long
using namespace std;
const int oo = 1e5 + 5 ;
int a[oo];
int dem[oo];
void solve1()
{
    if(a[1]%2) cout<<"sjfnb";
    else cout<<"cslnb";
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, nim=0, cnt=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        {
            scanf("%d", &a[i]);
        }
    if(n==1) solve1();
    else
    {
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {

            dem[a[i]]++;
            if(dem[a[i]]==3) {cout<<"cslnb";return 0;}
            //a[i]-=(i-1);
            cnt+=(a[i]-(i-1));
            //nim^=a[i];
        }
       // cerr<<cnt<<endl;
        if(cnt%2)
            cout<<"sjfnb";
        //cout<<"cslnb";
        else cout<<"cslnb";
    }
    return 0;
}