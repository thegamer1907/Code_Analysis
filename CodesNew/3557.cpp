#include <iostream>
#include <cstdio>

using namespace std;

int a[105];

int main(){
    int n,m,v=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        v=max(v,a[i]);
    }
    int fill=0;
    for(int i=0;i<n;i++){
        fill+=v-a[i];
    }
    int remain=max(0,m-fill);
    int ans2=v+m,ans1=v+remain/n+(remain%n!=0);
    printf("%d %d\n",ans1,ans2);
    return 0;
}