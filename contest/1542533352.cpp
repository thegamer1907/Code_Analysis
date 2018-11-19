#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
ll n,k;
ll pro[20];
bool breakt=false;
ll pw (ll x,ll y){
    if (y<=0){
        return 1;
    }
    return x*pw(x,y-1);
}
void solve (int indx,int a1,int a2,int a3,int a4,int num){
    //cout <<"ASDF";
    //cout <<indx<<" : "<<a1<<" : "<<a2<<" : "<<a3<<" : "<<a4<<" : "<<num<<" : "<<pro[indx]<<endl;
    if (indx>=16){
        if (num>0&&(a1>num/2||a2>num/2||a3>num/2||a4>num/2)){
            //cout <<"ASDF\n";
            return ;
        }
        //cout <<num<<"ASSSS";
        if (num>0)breakt=true;
        return;
    }
    int a[5]={0};
    int z=indx;
    int h=0;
    while (z>0){
        a[h]=z%2;
        z/=2;
        h++;
    }
    //cout <<"ASDF";
    for (int i=0;i<=min(3ll,pro[indx])&&(!breakt);i++){
        //cout <<"ASDF: "<<indx<<" : "<<a1<<" : "<<a2<<" : "<<a3<<" : "<<a4<<" : "<<num<<" : "<<pro[indx]<<endl;
        solve (indx+1,a1,a2,a3,a4,num);
        a1+=a[0];
        a2+=a[1];
        a3+=a[2];
        a4+=a[3];
        num++;
    }
}
int main()
{
    ios::sync_with_stdio(false);

    cin >>n>>k;
    //n=100000;
    //k=4;
    for (int i=0;i<n;i++)
    {
        ll cur=0;
        for (int l=0;l<k;l++){
            int a=0;
            cin>>a;
            cur+=a*pw(2,l);
        }
        //cur=(rand()%8)+8;
        //cout <<cur<<endl;
        //printf ("%lld\n",cur);
        pro[cur]++;
    }
    if (pro[0]){
        cout <<"Yes\n";
        return 0;
    }
    solve (1,0,0,0,0,0);
    if (breakt)cout <<"Yes\n";
    else cout <<"No\n";
    return 0;
}
