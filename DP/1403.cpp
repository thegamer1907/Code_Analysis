#include<bits/stdc++.h>
using namespace std;

int one[105],zero[105];

int main(){
    int n,i,j,a[105];
    int cnt = 0;
    scanf("%d",&n);
    for(i = 1;i <= n;i ++){
        scanf("%d",&a[i]);
        if(a[i]){
            one[i] = 1;
            cnt ++;
        }
        else zero[i] = 1;
    }
    for(i = 1;i <= n;i ++){
        one[i] += one[i - 1];
        zero[i] += zero[i - 1];
    }
    if(!cnt && cnt == n) printf("%d\n",n);
    else{
        priority_queue<int> q;
        for(i = 1;i <= n;i ++)
            for(j = i;j <= n;j ++)
                q.push((zero[j] - zero[i - 1]) - (one[j] - one[i - 1]));
        printf("%d\n",cnt + q.top());
    }
    return 0;
}
