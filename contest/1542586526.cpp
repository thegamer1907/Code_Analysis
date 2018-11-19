#include<bits/stdc++.h>
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
int a, b, c;
double d[3];
int cnt, t1, t2;
bool flag;

int main(){
    //freopen("in.txt","r",stdin);
    scanf("%d%d%d", &a, &b, &c);
    d[cnt ++] = a + 0.03;
    if(d[cnt - 1] >= 12) d[cnt - 1] -= 12;
    d[cnt ++] = b / 5.0 + 0.05;
    d[cnt ++] = c / 5.0 + 0.08;
    assert(d[0] < 12);
    assert(d[1] < 12);
    assert(d[2] < 12);
    sort(d, d + cnt);
    //printf("%f %f %f\n", d[0], d[1], d[2]);
    scanf("%d%d", &t1, &t2);
    if(t1 > d[0] && t2 > d[0] && t1 < d[1] && t2 < d[1]) flag = 1;
    if(t1 > d[1] && t2 > d[1] && t1 < d[2] && t2 < d[2]) flag = 1;
    if((t1 > d[2] || t1 < d[0]) && (t2 > d[2] || t2 < d[0])) flag = 1;
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
