//
//ID: taoxiaa1
//PROG: concom
//LANG: C++
//
//URAL ID:248353QC
#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
#include<queue>
#include<cmath>
#include<stack>
#include<vector>
#include<cstdio>
//#include<bits/stdc++.h>
using namespace std;
//FILE *fin, *out;
//fin = fopen("money.fin", "r");
//out = fopen("money.out", "w");
//ofstream fout("money.out");
//ifstream fin("money.in");
int s[100005],t[100005];
int main(){
    int n;
    scanf("%d",&n);
    int id=0,j=1000000000;
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
        t[i]=s[i]-i+1;
        int k=(t[i]+n-1)/n;
        if(k<j){
            j=k;
            id=i;
        }
    }
    printf("%d\n",id);
    return 0;
}
