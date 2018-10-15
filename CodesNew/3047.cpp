#include<bits/stdc++.h>
using namespace std;
char str[1000005];
int num[1000005];
int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    long long res=0;
    int len=strlen(str);
    num[0]=str[0]-'0';
    for(int i=1;i<len;i++){
        num[i]=num[i-1]+str[i]-'0';
    }
    res = upper_bound(num,num+len,n)-lower_bound(num,num+len,n);
    for(int i=1;i<len;i++){
        res += upper_bound(num+i,num+len,n+num[i-1])-lower_bound(num+i,num+len,n+num[i-1]);
    }
    printf("%lld\n",res);
}