#include<stdio.h>
#include<map>
#include<iostream>
#include<assert.h>
#include<math.h>
#define PII pair<int,int>
#define PIII pair< pair<int, int>, int>
#define X first
#define Y second
#define MP make_pair
#define N 100010
#define M 200010
#define ll long long
using namespace std;

int read()
{
    int x = 0, f = 1; char ch = getchar();
    while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
    while(ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
    return x * f;
}

char s[2], t[N][2];
int n;
bool flag;

int main(){
    //freopen("in.txt","r",stdin);
    scanf("%s", s);
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
    {
        scanf("%s", t[i]);
        if(t[i][0] == s[0] && t[i][1] == s[1]) flag = 1;
    }
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= n; j ++)
        {
            if(t[i][1] == s[0] && t[j][0] == s[1]) flag = 1;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
