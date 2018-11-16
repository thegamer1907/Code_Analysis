#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "string.h"
#define M 1000000007
#include "algorithm"
using namespace std;

int T[3000];
void swapp(int* a,int* b){
int c;
c = *a;
*a = *b;
*b = c;
}

int main(){
    int n ;
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int m;
    scanf("%d",&m);
    int B[m];
     for(i=0;i<m;i++){
        scanf("%d",&B[i]);
    }

    int j,cmp = 0;
    sort(A,A+n);
    sort(B,B+m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if( A[i] == B[j]+1 || A[i]==B[j]-1 || A[i]==B[j] ){
                cmp++;
                //printf("%d %d\n",A[i],B[j]);
                B[j]=-1;
                break;
            }
        }
    }

    printf("%d",cmp);



    return 0;
}


