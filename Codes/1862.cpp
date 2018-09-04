#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n,m,k,mini=1,maxi,mid,c,sq;
    cin>>n>>m>>k;
    maxi=n*m;
    while (mini!=maxi){
        mid=(mini+maxi+1)/2;
        c=0;
        for (int i=1;i<=n;i++) c+=min( (mid-1)/i,m );
        if (c<k) mini=mid;
        else maxi=mid-1;
    }
    if (mini>max(n,m)){
        sq=sqrt(mini)+1;
        bool col=true;
        for (int i=2;i<=sq && col;i++) col=mini%i;
        if (col) mini++;
    }
    cout<<mini<<endl;
    return 0;
}
