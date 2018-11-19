#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+9;
int arr[3699*12];
int main(){
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2){
        memset(arr,0,sizeof(arr));
        arr[12*3600/60*s]=1;
        h%=12;
        arr[12*3600/60*m+12*3600/60/60*s]=1;
        arr[h*3600+m*60+s]=1;
        t1%=12,t2%=12;
        t1*=3600,t2*=3600;
        bool t=0;
        for(int i=t1;;i++){
            i%=3600*12;
            if(arr[i])break;
            if(t2==i){
                t=1;break;
            }
        }
        for(int i=t1;;i+=3600*12-1){
            i%=3600*12;
            if(arr[i]){
                //cout<<i<<endl;
                break;
            }
            if(t2==i){
                t=1;break;
            }
        }
        if(t)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
