#include <bits/stdc++.h>

using namespace std;

vector<int>vv;

int sum(int n){

    int ret=0;
    while(n){

        ret+=n%10;
        n/=10;

    }
    return ret;
}

int main(){

    for(int i=19; ; i++){

        int z=sum(i);
        if(z==10)vv.push_back(i);
        if(vv.size()==10000)break;
    }
    int k;
    scanf("%d", &k);
    
    printf("%d\n", vv[k-1]);

}
