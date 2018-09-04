# include <bits/stdc++.h>
 using namespace std;

 int P[10000005];

 void Criba(){

    const int N = 10000002;

    for(int i = 4; i <= N; i+=2)P[i] = 2;

    for(int i = 3; i*i <= N; i+= 2){
        if(P[i])continue;

        for(int j = 2*i; j <= N; j+=i)
            P[j] = i;
    }
 }

 long long Sum[10000000+5];

 void Fact(int a){

    while(P[a]){
        Sum[P[a]]++;
        int tmp = P[a];
        while(a % tmp == 0)a /= tmp;
    }

    Sum[a]++;
 }

 int n, m, a, b;

 int main(){

    Criba();

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
        Fact(a);
    }
/*
    for(int i = 1; i <= 20; i++)
        printf("%d ", Sum[i]);
    printf("\n");*/

    for(int i = 3; i <= 10000000; i++)
        Sum[i] += Sum[i-1];
    Sum[1] = 0;
    scanf("%d", &m);
    for(int i = 1; i <= m; i++){
        scanf("%d %d", &a, &b);
        if(b > 10000000)b = 10000000;
        if(a > 10000000)a = 10000000;

        printf("%lld\n", Sum[b] - Sum[a-1]);
    }
 return 0;
 }