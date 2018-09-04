#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ok(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum==10;
}

int main(){
    int k;
    scanf("%d",&k);
    for(int i=19;;i++){
        if(ok(i))k--;
        if(!k){
            printf("%d\n",i);
            return 0;
        }
    }
}
