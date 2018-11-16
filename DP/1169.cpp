#include <bits/stdc++.h>

using namespace std;
const int oo=(int)1e8;

int n,tem,ans=0,c=0;
vector< pair<int , int > > num;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    std::ios::sync_with_stdio(false);   // this make cin , cout fast like scanf , brintf
    ////////////////////////////////
    ////////////////////////////////
    ////////////////////////////////
    cin>>n;
    num.resize(n+2);
    for(int i=0 ; i<n+2;i++){
        num[i].first=0;
        num[i].second=0;
    }
    for(int i=1;i<=n;i++){
        cin>>tem;
        if(tem){
            num[i].first=(num[i-1].first)+1;
            num[i].second=(num[i-1].second);
            c++;
        }else{
            num[i].first=(num[i-1].first);
            num[i].second=(num[i-1].second)+1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            ans=max(ans,c-(  num[j].first - num[i-1].first )+(  num[j].second - num[i-1].second  ));
        }
    }
    cout<<ans<<endl;
    return 0;
}

