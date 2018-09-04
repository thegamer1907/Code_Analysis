#include<bits/stdc++.h>
using namespace std;

int sum(int x){
    int s = 0;
    while(x){
        s += x%10;
        x /= 10;
    }
    return s;
}

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < 11000008; i++){
        if(sum(i) == 10) cnt++;
        if(cnt == n){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
