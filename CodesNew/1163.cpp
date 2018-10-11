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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans,turn=1e9,cnt=0;
    for(int i=0;i<n;i++){
        int x=a[i]-cnt,q;
        if(x<=0){
            q=0;
        }
        else{
            q=x/n;
            if(x%n!=0){
                q++;
            }
        }
        if(q<turn){
            turn=q;
            ans=i+1;
        }
        cnt++;
    }
    cout<<ans;
    return 0;
}

