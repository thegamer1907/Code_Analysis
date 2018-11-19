#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;

int main()
{
    char a,b;
    cin>>a>>b;
    bool ch=false,c2=false;
    int n;
    cin>>n;
    while (n--){
        char x,y;
        cin>>x>>y;
        if (y==a){
            ch=true;
        }
        if (x==b)
            c2=true;
        if (x==a && b==y){
            c2=true;ch=true;}
    }
    if (ch && c2)
        puts("YES");
    else
        puts("NO");
    return 0;
}
