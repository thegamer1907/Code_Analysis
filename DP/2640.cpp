#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
int n, t;
int gt(int x) { int sm = 0; while(x) { sm+=x%10; x/=10; } return(sm); }
int main(){
    scanf("%d", &n);
    for(int i=0;;i++) if(gt(i)==10 && ++t==n) return !printf("%d", i);
}
