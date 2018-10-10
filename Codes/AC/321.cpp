#include <bits/stdc++.h>

using namespace std;

#define Ahmed ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for (int i = a; i <= b; i++)


int main(){
    Ahmed
    int n,m; scanf("%d",&n);
    int arr[n];
    loop(i,0,n-1){
        scanf("%d",arr+i);
        if(i!=0)arr[i]+=arr[i-1];
    }
    scanf("%d",&m);
    while(m--){
        int a; scanf("%d",&a);
        printf("%d\n",lower_bound(arr,arr+n,a)-arr+1);
    }
    return 0;
}
