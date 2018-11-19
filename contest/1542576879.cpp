#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define ff first
#define pb push_back
using namespace std;
ll power(ll a,ll b,ll c){
    ll ret=1;
    while(b){
        if(b%2==1)
            ret=(ret*a)%c;
        b/=2;
        a=(a*a)%c;
    }
    return ret;
}
int b[100005];
int check[3],check1[3];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n+3][k+3];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
            if(a[i][j]>0)
            b[i]+=power(2,k-j-1,mod);
        }
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[b[i]]++;
        //cout<<b[i]<<" ";
    }
    int flag=1;
    if(k==1){
        for(int i=0;i<n;i++){
            if(a[i][0]==0){
                flag=0;
            }
        }
        if(flag==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return 0;
    }
    if(k==2){
        if(m[0]>0){
            cout<<"YES\n";
            return 0;
        }
        if(m[1]>0&&m[2]>0){
            cout<<"YES\n";
            return 0;
        }
        cout<<"NO\n";
        return 0;
    }
    if(k==3){
        if(m[0]>0){
            cout<<"YES\n";
            return 0;
        }
        int f=0;
        for(int i=1;i<8;i++){
            for(int j=1;j<8;j++){
                if((i&j)==0&&m[i]>0&&m[j]>0){
                    f=1;
                }
            }
        }
        if(f==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return 0;
    }
    if(k==4){
        if(m[0]>0){
            cout<<"YES\n";
            return 0;
        }
        int f=0;
        for(int i=1;i<16;i++){
            for(int j=1;j<16;j++){
                if((i&j)==0&&m[i]>0&&m[j]>0){
                    f=1;
                }
            }
        }
        if(f==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        return 0;
    }
}