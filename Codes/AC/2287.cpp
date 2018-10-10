#include <bits/stdc++.h>

using namespace std;

const int N=10000017;
int n,i,j,b,a[N],l,r,m,rez[N];
bool navp[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (i=0;i<n;++i) {cin>>b; ++a[b];}
    i=2;
    while (i<N)
    {
        j=i*2;
        rez[i]=a[i];
        while (j<N)
        {
            rez[i]+=a[j];
            navp[j]=true;
            j+=i;
        }
        ++i;
        while ((navp[i]==true)&&(i<N)) {++i;}
    }
    for (i=3;i<N;++i) {rez[i]+=rez[i-1];}
    cin>>m;
    for (i=0;i<m;++i)
    {
        cin>>l>>r;
        r=min(r,N-10);
        if (l>r) {cout<<"0\n";}
        else {cout<<rez[r]-rez[l-1]<<"\n";}
    }
    return 0;
}
