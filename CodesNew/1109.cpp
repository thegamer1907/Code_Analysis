//Kartik Anand
#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%I64d",&x)
#define scs(x) scanf("%s",x)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pl pair<ll,ll>
int main(){
    fast_io;
    ll n;
    cin>>n;
    ll low=1,high=1e18,mid;
    while(low<=high){
        mid=(low+high)/2;
        ll temp=n,sum1=0,sum2=0;
        while(temp){
            if(temp<=mid){
                sum1+=temp;
                temp=0;
            }
            else{
                temp-=mid;
                sum1+=mid;
            }
            ll q=temp/10;
            sum2+=q;
            temp-=q;
        }
        if(sum1>=sum2){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low;
    return 0;
}

