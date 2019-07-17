#include<bits/stdc++.h>
#define ll long long
#define mino "D"

using namespace std;

int n,a[100005],L;

void turbo()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
void nhap()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
}
void xuli()
{
    int t=0,d=0,vt=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1 || a[i]!=a[i-1])
        {
            d=1;
        }
        else d++;
        if(d>=2) t++;
        if(d>=3 || t>=2)
        {
            cout<<"cslnb";
            return;
        }
        if(d==2) vt=i;
    }
    if(vt!=0)
    {
        if(a[vt]==0)
        {
            cout<<"cslnb";
            return;
        }
        a[vt]--;
        L++;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(i==1 || a[i]!=a[i-1])
        {
            d=1;
        }
        else d++;
        if(d>=2)
        {
            cout<<"cslnb"; return;
        }
    }
    int i=1,mi=-1;
    while(i<=n)
    {
        int j=i;
        while((a[j]==0 || (a[j]-1)<=mi) && j<=n)
        {
            mi=max(mi,a[j]);
            j++;
        }
        if(j==n+1)
        {
            if(L==0) cout<<"cslnb";
            else cout<<"sjfnb";
            break;
        }
        int t=a[j]-max(mi,0);
        if(t>1) t--;
        a[j]-=t;
        i=j;
        L=(L+t)%2;
    }
}
void input()
{
    freopen(mino".inp","w",stdout);
    srand((int)time(NULL));
    int n=1+rand()%100;
    cout<<n<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<1+rand()%1000000000<<" ";
    }
    fclose(stdout);
}
int main()
{
    //input();
    //freopen(mino".inp","r",stdin);
    //freopen(mino".out","w",stdout);
    turbo();
    nhap();
    xuli();
}