#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int ar[n];
    for(int i=1;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int cur=1;
    while(cur<t){
        cur+=ar[cur];
    }
    if(cur==t) printf("YES");
    else printf("NO");
    return 0;
}