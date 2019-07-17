#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    long long n,k,count=0,A[100000],l=1,r;
    int m;
    scanf("%lli%i%lli",&n,&m,&k);
    r=k;
    for(int i=0;i<m;i++) scanf("%lli",A+i);
    while(l<=A[m-1]){
        long long ind1=upper_bound(A,A+m,l-1)-A;
        long long ind2=lower_bound(A,A+m,r)-A;
        ind2+=(r==A[ind2]);
        if(A[ind1]>r) {
            l=r+1;
            r+=k;
            continue;
        }
        if(ind2>=ind1){
            l=r+1;
            r+=ind2-ind1;
            count++;
        }
        else r=l+k-1;
    }
    printf("%lli",count);
}