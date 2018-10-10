#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string.h>

using namespace std;


int a[1000000];
int sum[10000000];
int Sum(int x) {
    int ans = 0;
    while(x) {
        ans += (x%10);
        x/=10;
    }
    return ans;
}
int make(int n){
  int x = 0, y = 0;
  int ans = sum[n/10000] + sum[n % 10000];
  return ans;
}
void Init() {
    int cnt = 0;
    for(int i = 0;i <= 10000;i++){
        sum[i] = Sum(i);
    }
    for(int i = 0; i < 100000000; i++) {
        int sum1 = make(i);
        if(sum1 == 10) {
            a[cnt++] = i;
        }
    }
    return ;
}
int main() {
    int k;
    Init();
    while(~scanf("%d",&k)) {
        printf("%d\n",a[k - 1]);

    }

    return 0;
}
