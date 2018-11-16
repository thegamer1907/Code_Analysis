#include <bits/stdc++.h>

using namespace std;

template <typename _Tp> inline _Tp read(_Tp&x){
    char c11=getchar(),ob=0;x=0;
    while(c11^'-'&&!isdigit(c11))c11=getchar();if(c11=='-')c11=getchar(),ob=1;
    while(isdigit(c11))x=x*10+c11-'0',c11=getchar();if(ob)x=-x;return x;
}

int main() {
    int n,k;
    read(n); read(k);
    int counter=0;
    int minScore=1;
    while(n>0){
        int s;read(s);
        if(s<minScore){
            break;
        }
        counter++;
        if(counter==k){
            minScore=s;
        }
        n--;
    }
    printf("%d",counter);
}