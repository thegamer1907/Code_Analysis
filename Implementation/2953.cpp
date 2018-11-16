#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

bool ap[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l,a,b,c,d;
    cin>>a>>b>>c>>d>>l;
    for(int i=a;i<=l;i+=a) ap[i]=1;
    for(int i=b;i<=l;i+=b) ap[i]=1;
    for(int i=c;i<=l;i+=c) ap[i]=1;
    for(int i=d;i<=l;i+=d) ap[i]=1;
    int ans=0;
    for(int i=1;i<=l;i++) ans+=ap[i];
    cout<<ans<<"\n";
    return 0;
}
/**

**/
