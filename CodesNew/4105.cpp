#include <bits/stdc++.h>

using namespace std;

vector<long long> v(200000+5);
long long sum[200000+5];
int n;
int BS(int left,int right,long long x){
  // cout<<left<<" l:r "<<right<<": "<<x<<endl;
    int mid=(left+right)/2;
    if(left>right)
        return right;
    if(sum[mid]==x)
        return mid;
    if(sum[mid]>x)
        if(sum[mid-1]<x)
            return mid;
        else
            return BS(left,mid-1,x);

    if(sum[mid]<x)
        return BS(mid+1,right,x);
}


int main(){
    int q;
    long long x=0,input;
    cin>>n>>q;
    sum[0]=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum[i]=sum[i-1]+v[i];
    }
    int save=1;
    for(int i=1;i<=q;i++){
        if(x>=sum[n])
            x=0;
        cin>>input;
        x+=input;
     int res=BS(save,n,x);
     //cout<<res<<endl;
        if(sum[res]>x){
            cout<<n-res+1<<endl;
       }else{
            if(res==n)
                cout<<n<<endl;
            else
                cout<<n-res<<endl;

       }



    }
    return 0;
}
