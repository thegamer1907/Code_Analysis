#include <bits/stdc++.h>
#pragma GCC optimize(3)
using namespace std;
void qr(int &num){
    num=0; int y=1;
    char c; c=getchar();
    while((c<'0'||c>'9')&&c!='-') c=getchar();
    if(c=='-') y=-1,c=getchar();
    while(c>='0'&&c<='9') num=num*10+c-'0',c=getchar();
    num*=y;
}
int a[55];
int main(){
    int n,k;
    qr(n);qr(k);
    for(int i=1;i<=n;i++){
        int x;
        qr(x);
        a[i]=x;
    }
    int pos=-1;
    for(int i=n;i>=1;i--){
        if(a[i]!=0){
            pos=i;
            break;
        }
    }
    if(pos==-1) cout<<0;
    else{
        if(pos<k) cout<<pos;
        else{
            int tmp=a[k];
            int ans=k;
            for(int i=k+1;i<=n;i++){
                if(a[i]!=tmp) break;
                ans++;
            }
            cout<<ans;
        }
    }
    return 0;
}
