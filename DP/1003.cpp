#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1010],i,j,mat[1010][1010],p,mx=-1000000;
bool ban[1010][1010];
int dp(int ini,int fin){
    if( ban[ini][fin]==true )
        return mat[ini][fin];
    ban[ini][fin]=true;
    if( ini==fin ){
        if(arr[fin]==0){
            mat[ini][fin]=1;
        }
        else{
            mat[ini][fin]=-1;
        }

    }
    int mit=(ini+fin)/2;
    mat[ini][fin]=dp(ini,mit)+dp(mit+1,fin);
    return mat[ini][fin];
}

int main(){

 scanf("%d",&n);
    int sum=0;
 for(p=1;p<=n;p++){
    scanf("%d",&arr[p]);
    sum+=arr[p];
 }

 for(i=1;i<=n;i++){
 for(j=i;j<=n;j++){
    mx=max(mx, dp(i,j) );
 }

 }
 cout<<sum+mx;
 return 0 ;
}
