#include <bits/stdc++.h>
using namespace std;
long long n,m,k,ans,crpg,ar[200010],kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    long long congdon=0;
    long long i=0;
    while(ans<m||i<m)
    {
        while(ar[i]-ans<=(crpg+1)*k&&i<m)
        {
            congdon+=1;
            i+=1;
        }
        if(congdon==0)         crpg=(ar[i]-1-ans)/k;
        if(congdon!=0)
        kq+=1;
        ans+=congdon;
        congdon=0;
    }
    cout<<kq;
}