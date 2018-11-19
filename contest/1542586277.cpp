#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
int x[4];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int mask=0;
        for(int j=0;j<k;j++)
        {
            cin>>x[j];
            if(x[j])
                mask|=(1<<j);
        }
        //cout<<mask<<endl;
        a[i]=mask;
    }
    sort(a+1,a+n+1);
    vector<int> f;
    f.push_back(a[1]);
    for(int i=2;i<=n;i++)
        if(a[i]!=a[i-1])
            f.push_back(a[i]);
    int s=f.size();
    bool posi=false;
    for(int mask=1;mask<(1<<s);mask++)
    {
        int cnt[4]={0};
        for(int j=0;j<s;j++)
        {
            if(mask&(1<<j))
            {
                //put the jth masks count
                for(int l=0;l<k;l++)
                {
                    if(f[j]&(1<<l))
                        cnt[l]++;
                }
            }
        }
        int len=__builtin_popcount(mask);
        len=len/2;
        bool tpos=true;
        for(int l=0;l<k;l++)
            if(cnt[l]>len)
                tpos=false;
        if(tpos)
        {
            posi=true;
            break;
        }
    }
    if(posi)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
