#include <bits/stdc++.h>

using namespace std;

//shoumo

#define LL long long
#define PI 2*acos(0.0)
#define INF INT_MAX
#define MOD 1000000007

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,a,c=0,i1=0,i2,mx=-2,mn=0,mxx=-1;//,x[101][101];
    //memset(x,0,sizeof(x));
    vector <int> s;//,v;
    s.push_back(0);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        c+=a;
        //v.push_back(a);
        if(a) s.push_back(s[i-1]-1);
        else s.push_back(s[i-1]+1);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            //x[i][j]=c+s[j]-s[i];
            mxx=max(mxx,c+s[j]-s[i-1]);
        }
    }
    cout<<mxx<<"\n";
    /*for(i=1;i<=n;i++)
    {
        cout<<s[i]<<"\n";
        if(s[i]>=mx)
        {
            i2=i;
            mx=s[i];
        }
    }
    for(i=1;i<=i2;i++)
    {
        if(s[i]<=mn)
        {
            i1=i;
            mn=s[i];
        }
    }
    cout<<mx<<" "<<s[i2]<<" "<<i2<<"\n"<<mn<<" "<<s[i1]<<" "<<i1<<"\n";
    cout<<c<<"\n";
    if(i1<i2) cout<<c+s[i2]-s[i1];
    else cout<<c+s[i2];*/
    return 0;
}
