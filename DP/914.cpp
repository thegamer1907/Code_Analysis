#include<bits/stdc++.h>
using namespace std;

int a[100+5];

int main(){
    int n;
    scanf("%d",&n);
    int ans =-1;
    for(int i=0 ; i<n ; ++i)scanf("%d",a+i);
    for(int i=0 ; i<n ; ++i){
        for(int j=i ; j<n ; ++j){
            int x=0;
            for(int k=0 ; k<n ; ++k){
                if(k>=i && k<=j && !a[k])++x;
                else if((k<i || k>j) && a[k])++x;
            }
            ans = max(ans , x);
        }
    }
    printf("%d\n",ans);
	return 0;
}
