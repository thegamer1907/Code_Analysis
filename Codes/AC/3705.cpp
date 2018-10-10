#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string ham;
    int haveB,haveS,haveC,priceB,priceS,priceC,cntB=0,cntS=0,cntC=0;
    long long money;
    cin>>ham>>haveB>>haveS>>haveC>>priceB>>priceS>>priceC>>money;
    for(int i=0;i<ham.size();i++)
    {
        if(ham[i]=='B')
            cntB++;
        if(ham[i]=='S')
            cntS++;
        if(ham[i]=='C')
            cntC++;
    }
    int ans=min(cntB?haveB/cntB:INF,min(cntS?haveS/cntS:INF,cntC?haveC/cntC:INF));
    haveB-=cntB*ans,haveS-=cntS*ans,haveC-=cntC*ans;
    while((haveB&&cntB)||(haveS&&cntS)||(haveC&&cntC))
    {
        money-=((cntB-haveB)>0?cntB-haveB:0)*priceB+((cntS-haveS)>0?cntS-haveS:0)*priceS+((cntC-haveC)>0?cntC-haveC:0)*priceC;
        haveB-=min(haveB,cntB),haveS-=min(haveS,cntS),haveC-=min(haveC,cntC);
        if(money<0)
            break;
        ans++;
    }
    cout<<ans+money/(cntB*priceB+cntS*priceS+cntC*priceC);
    return 0;
}
