#include<stdio.h>
#include<stdlib.h>
int n, i, x, y, z;
int fX, fY, fZ;
int main(){
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d", &x, &y, &z);
        fX+=x, fY+=y, fZ+=z;
    }
    printf(abs(fX)+abs(fY)+abs(fZ)==0 ? "YES" : "NO");
    return 0;
}
