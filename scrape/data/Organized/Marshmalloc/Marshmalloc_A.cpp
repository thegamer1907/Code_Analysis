#include<stdio.h>
#include<queue>
using namespace std;
queue<long long> q;
int main(){
    long long n,k;
    int m;
    scanf("%lld %d %lld",&n,&m,&k);
    for(int i=0;i<m;i++){
        long long tmp;
        scanf("%lld",&tmp);
        q.push(tmp);
    }
    int i;long long pls=0;
    for(i=0;!q.empty();i++){
        int c=0,cnt=0;
        while(1){
            if(q.empty()){break;}
            if(q.front()+pls<=k){
                cnt++;
                q.pop();
                c--;
            }
            else if(cnt==0&&q.front()+pls>k){
                pls-=(q.front()+pls-1)/k*k;
                if(q.front()+pls<=k){
                    cnt++;
                    q.pop();
                    c--;
                }
            }
            else{break;}
        }
        pls+=c;
    }
    printf("%d",i);
}