#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int c[20];
int main(){
    int n,k,i,j,x;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        int mask =0;
        for(j=0;j<k;j++){
            scanf("%d",&x);
            if(x==1)
                mask|=(1<<j);
        }
        c[mask]++;
    }
    bool flag = false;
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if((i&j) ==0 && c[i]>0 && c[j]>0)
                flag =true;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}

