#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
typedef long long lld;
const int MAX = 10000005;
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int p[MAX]={0},c=0;
bool mk[MAX]={0};
lld sum[MAX]={0};
int cnt[MAX]={0};
int main()
{
    int n, i,j,k;
    int T;
    for(i=2;i<MAX;i++){
        if(mk[i]==false){
            p[c++]=i;
        }
        for(j=0;j<c&&(lld)p[j]*i<MAX;j++){
            mk[p[j]*i]=true;
            if(i%p[j]==0)break;
        }
    }
    //cout<<c<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        cnt[j]++;
    }
    for(i=0;i<c;i++){
        int z=p[i];
        for(j=z;j<MAX;j+=z){
            sum[z]+=cnt[j];
        }
    }

    for(i=1;i<MAX;i++){
        sum[i]+=sum[i-1];
    }
    int m;
    cin>>m;
    int l,r;
    while(m--){
        scanf("%d%d",&l,&r);
        if(l>=MAX){
            printf("0\n");
            continue;
        }
        if(r>=MAX)r=MAX-1;
        printf("%I64d\n",sum[r]-sum[l-1]);
    }
    return 0;
}
/*

*/

