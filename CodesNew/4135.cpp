#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn=2*1e5+5;
LL sum[maxn];
int main()
{
    //std::ios::sync_with_stdio(false);
    //cin.tie(0);
    int n,q;
    scanf("%d%d",&n,&q);
    sum[0]=0;
    for(int i=0;i<n;i++)
    {
        LL k;
        cin>>k;
        sum[i+1]=sum[i]+k;
    }
    LL s=0;
    for(int i=0;i<q;i++)
    {
        LL k;
        cin>>k;
        s+=k;
        if(s>=sum[n]) {
                s=0;
                cout<<n<<endl;
        }
        else {
            int f=lower_bound(sum,sum+n+1,s)-sum;
            //cout<<f<<endl;
            if(sum[f]==s) {
                cout<<n-f<<endl;
            }
            else {
                cout<<n-f+1<<endl;
            }
        }
    }
    return 0;
}