#include <stdio.h>
int main() {
    long long n,k,count=0,A[100000];
    int m,deleted=0;
    scanf("%lli%i%lli",&n,&m,&k);
    for(int i=0;i<m;i++) scanf("%lli",A+i);

    int l=0;
    while(l<m){
        int r=l+1;
        while(r<m && (A[r]-deleted+k-1)/k==(A[l]-deleted+k-1)/k) r++;
        deleted+=r-l;
        l=r;
        count++;
    }
    printf("%lli",count);
}
/*1000000000000000000 2 2
1 1000000000000000000*/