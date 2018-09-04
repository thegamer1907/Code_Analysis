#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int n;
    int x;
    cin>>n;
    int l=1;
    scanf("%d",&x);
    a[x]=l;
    for(int i=1;i<=x;i++) a[i]=1;
    int xx=x;
    for(int i=2;i<=n;i++){
        scanf("%d",&x);
        xx+=x;l++;
        a[xx]=l;
    }
    for(int i=1000000;i>=1;i--){
        if(a[i]==0) a[i]=a[i+1];
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        scanf("%d",&x);
        printf("%d\n",a[x]);
    }
}
