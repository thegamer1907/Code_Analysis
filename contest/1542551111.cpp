#include<bits/stdc++.h>
using namespace std;

#define si(n) scanf("%d",&n)

int arr[1<<4];

int main()
{
   // freopen("input.txt","r",stdin);
    int n,k,i,j;
    si(n);si(k);
    for(i=0;i<n;i++){
        int x=0;
        for(j=0;j<k;j++){
            int t;
            si(t);
            x=(x<<1)|t;
        }
        arr[x]++;
    }
    for(i=0;i< (1<<k);i++){
        for(j=0;j< (1<<k);j++){
            if(!(i&j) && arr[i] && arr[j]){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}
