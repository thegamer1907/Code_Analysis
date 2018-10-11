#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i;
    scanf("%d%d", &n, &m);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sum =0, res=0, j=0, ans=0;
    for(i=0;i<n;i++){
        if(sum < m){
            sum += arr[i];
            if(sum > m){
                ans = max(ans, res);
                sum-=arr[j];
                j++;
                res--;
            }
            res++;
        } else {
            ans = max(ans, res);
            sum-=arr[j];
            sum+=arr[i];
            j++;
        }
    }
    ans = max(ans, res);
    printf("%d\n", ans);
}
