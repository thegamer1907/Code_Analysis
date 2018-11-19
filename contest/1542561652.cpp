#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n][k],minn=1000,ind,ind2,temp;
    for(int i=0; i<n; i++){
        int tempsum=0;
        int sumN=0;
        for(int j=0; j<k; j++){
            scanf("%d",&arr[i][j]);
            sumN += arr[i][j];
            tempsum += arr[i][j]*(j+1);
        }
        if(n==1 && sumN==0){
            printf("YES");
            return 0;
        }
        if(sumN<minn){
            minn=sumN;
            ind=i;
            temp=tempsum;
        }else if(sumN==minn && tempsum!=temp) ind2=i;
    }

    for(int i=0; i<n; i++){
        int flag=0;
        if(i==ind) continue;
        for(int j=0; j<k; j++){
            if(arr[ind][j]+arr[i][j]==2) flag=1;
        }
        if(!flag){
            printf("YES");
            return 0;
        }
    }
    for(int i=0; i<n; i++){
        int flag=0;
        if(i==ind2) continue;
        for(int j=0; j<k; j++){
            if(arr[ind2][j]+arr[i][j]==2) flag=1;
        }
        if(!flag){
            printf("YES");
            return 0;
        }
    }
    printf("NO");

    return 0;
}
