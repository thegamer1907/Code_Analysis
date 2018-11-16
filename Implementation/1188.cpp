#include<bits/stdc++.h>
using namespace std;
char a[55];
int main(){
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    scanf(" %s",a+1);
    for(j=1;j<=t;j++)
        for(i=1;i<n;i++)
            if(a[i] == 'B' && a[i+1] == 'G')
                swap(a[i],a[i+1]),i++;;
    printf("%s",a+1);
    return 0;
}
