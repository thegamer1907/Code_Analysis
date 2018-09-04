#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    __int64 n,m,k,u;
    while(~scanf("%I64d %I64d %I64d",&n,&m,&k)){
        if(n > m) swap(n,m);
        __int64 l=0,mid,r=m*n+1,sum;
         while(l<r-1){
            sum=0;
            mid=(l+r)/2;
            for(__int64 i=1; i<=n; i++){
                sum+=(min((mid-1)/i,m));
            }
            if(sum<k) l=mid;
            else if(sum == k){
                r=mid;
            }
            else r=mid;
        }
        printf("%lld\n",l);
    }
}

 		     		 		  	 	 	 				 	