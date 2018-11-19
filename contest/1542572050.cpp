//
// Created by tanishka on 5/10/17.
//
#include<bits/stdc++.h>
#define boost std::ios::sync_with_stdio(false);
#define cin std::cin
#define cout std::cout
#define MAX 100010
#define inf 2e9+2
#define MOD 1000000007
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long  ll;
typedef unsigned long long ull;
typedef  long double ld;
typedef vector<pair<pair<ll,ll>,pair<ll,ll >>> VPP;




int msk[20];
int main(){
    boost;
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        //int x,y,z;
        int temp[5];
        memset(temp,0,sizeof(temp));
        for(int j=4;j>4-k;j--)
            cin>>temp[j];
        msk[temp[4]+temp[3]*2+temp[2]*4+temp[1]*8]=1;
    }

    bool ans=false;
    for(int i=0;i<=(1<<k);i++){
        for(int j=0;j<=(1<<k);j++){
            if(msk[i]&&msk[j]&&(!(i&j))){
                ans=true;
            }
            //cout<<i<<" "<<j<<endl;
        }
    }
    if(ans){
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }

    return 0;
}
