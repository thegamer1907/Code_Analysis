#include<cstdio>
#include<cmath>
#include<algorithm>
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main() {
//    freopen("in.txt","r",stdin);
    bool flag1 = false,flag2 = false,flag3 = false;
    char a[3],b[3];
    cin>>a;
    int len;
    cin>>len;
    while(len--)
    {
        cin>>b;
        if(strcmp(a,b)==0) flag1 = true;
        if(a[1]==b[0]) flag2 = true;
        if(a[0]==b[1]) flag3 = true;
    }
    if(flag1||(flag2&&flag3)) puts("YES");
    else puts("NO");
    return 0;
}












